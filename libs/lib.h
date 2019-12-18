#pragma once

char* ReadString(FILE* file);
int TurnOver(char* str, FILE* dir);
bool Pal(char* in_s, int counter);
bool Pal(const char* in_s, int counter);