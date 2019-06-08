/*
 * Nama File	: huffmancode.h
 * Deskripsi	: ADT huffman code
 * Author/NIM	: Nadia Melyani / 181524022
 				  Zara Veda Mahendra / 181524031
 * Tanggal/Ver	: 07/06/2019 ver.0
 * Compiler		: TDM-GCC 4.9.2
**/

#include <stdio.h>
#include <stdbool.h>
#include <malloc.h>

#ifndef huffmancode_h

#define huffmancode_h

typedef char infotype;

typedef struct huffmanNode *addr_huffman;
typedef struct huffmanNode  {
	infotype symbol;
	addr_huffman parent;
	addr_huffman left_c;
	addr_huffman right_c;
	double probability;
} huffman_node;

typedef struct {
	addr_huffman tree;
} huffman_tree;

addr_huffman Dealloc(addr_huffman *N);
bool IsRightChild(addr_huffman N);
void PrintTab(int level);
void DisplayHuffmanTree(huffman_tree T);

#endif
