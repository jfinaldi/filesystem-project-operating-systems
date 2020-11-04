/**************************************************************
* Class:  CSC-415
* Name: Professor Bierman
* Student ID: N/A
* Project: Basic File System
*
* File: bitMap.h
*
* Description: 
*	This is the header file for initDirectory
*
**************************************************************/

#ifndef _BITMAP_H
#define _BITMAP_H

void memory_map_init(int starting_block);
int find_free_index(int blocks_needed);
