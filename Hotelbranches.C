/*
NAME:NGUNJIRI LUCY WAKURAYA
REG NO:CT101/G/26451/25
DESCRIPTION:A PROGRAM THAT CALCULATES AND DISPLAYS TOTAL NO OF OCCUPIED ROOMS
         ACROSS ALL BRANCHES IN A HOTEL
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define BRANCHES 3
#define FLOORS 5
#define ROOMS_PER_FLOOR 10

int main() {
    // Initialize random seed
    srand(time(NULL));
    
    // Create 3D array for all branches
    int chain[BRANCHES][FLOORS][ROOMS_PER_FLOOR];
    
    // Fill 3D array with random occupancy data (0 or 1)
    for(int branch = 0; branch < BRANCHES; branch++) {
        for(int floor = 0; floor < FLOORS; floor++) {
            for(int room = 0; room < ROOMS_PER_FLOOR; room++) {
                chain[branch][floor][room] = rand() % 2; // Random 0 or 1
            }
        }
    }
    
    // Display occupancy grid for each branch
    printf("=== HOTEL CHAIN OCCUPANCY GRIDS ===\n\n");
    
    for(int branch = 0; branch < BRANCHES; branch++) {
        printf("=== BRANCH %d ===\n", branch + 1);
        printf("Floor\\Room ");
        for(int room = 0; room < ROOMS_PER_FLOOR; room++) {
            printf("%2d ", room + 1);
        }
        printf("\n");
        
        for(int floor = 0; floor < FLOORS; floor++) {
            printf("Floor %d    ", floor + 1);
            for(int room = 0; room < ROOMS_PER_FLOOR; room++) {
                printf("%2d ", chain[branch][floor][room]);
            }
            printf("\n");
        }
        printf("\n");
    }
    
    // Calculate statistics per branch
    printf("=== OCCUPANCY STATISTICS PER BRANCH ===\n");
    printf("Branch\tOccupied\tVacant\t\tOccupancy Rate\n");
    printf("------\t--------\t------\t\t-------------\n");
    
    int totalOccupiedAll = 0;
    int totalVacantAll = 0;
    int totalRooms = BRANCHES * FLOORS * ROOMS_PER_FLOOR;
    
    for(int branch = 0; branch < BRANCHES; branch++) {
        int branchOccupied = 0;
        int branchVacant = 0;
        
        // Count occupied and vacant rooms for current branch
        for(int floor = 0; floor < FLOORS; floor++) {
            for(int room = 0; room < ROOMS_PER_FLOOR; room++) {
                if(chain[branch][floor][room] == 1) {
                    branchOccupied++;
                } else {
                    branchVacant++;
                }
            }
        }
        
        // Calculate occupancy rate for branch
        float branchOccupancyRate = (branchOccupied * 100.0) / (FLOORS * ROOMS_PER_FLOOR);
        
        // Display branch statistics
        printf("%d\t%d\t\t%d\t\t%.1f%%\n", 
               branch + 1, branchOccupied, branchVacant, branchOccupancyRate);
        
        // Update totals
        totalOccupiedAll += branchOccupied;
        totalVacantAll += branchVacant;
    }
    
    // Display overall statistics
    printf("\n=== OVERALL CHAIN STATISTICS ===\n");
    printf("Total Branches: %d\n", BRANCHES);
    printf("Total Floors: %d\n", BRANCHES * FLOORS);
    printf("Total Rooms: %d\n", totalRooms);
    printf("Total Occupied Rooms: %d\n", totalOccupiedAll);
    printf("Total Vacant Rooms: %d\n", totalVacantAll);
    printf("Overall Occupancy Rate: %.1f%%\n", 
           (totalOccupiedAll * 100.0) / totalRooms);
    
    // Additional detailed breakdown
    printf("\n=== DETAILED BREAKDOWN ===\n");
    for(int branch = 0; branch < BRANCHES; branch++) {
        printf("\nBranch %d - Floor by Floor:\n", branch + 1);
        printf("Floor\tOccupied\tVacant\n");
        printf("-----\t--------\t------\n");
        
        for(int floor = 0; floor < FLOORS; floor++) {
            int floorOccupied = 0;
            int floorVacant = 0;
            
            for(int room = 0; room < ROOMS_PER_FLOOR; room++) {
                if(chain[branch][floor][room] == 1) {
                    floorOccupied++;
                } else {
                    floorVacant++;
                }
            }
            printf("%d\t%d\t\t%d\n", floor + 1, floorOccupied, floorVacant);
        }
    }
    
    return 0;
}
