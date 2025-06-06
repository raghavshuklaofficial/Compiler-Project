#include "type_checkerDef.h"

void populateOffset(ASTNode* astIdNode, SymbolEntry* idEntry,SymbolTable* scopedTable,ErrorList* els);
int checkForIterationUpdate(ASTNode* astIterativeStmtNode);
Token* getArithmeticExpressionType(ASTNode* astArithmeticExpressionNode, ErrorList* els);
int checkBooleanExpressionType(ASTNode* astBooleanExpressionNode, SymbolTable* st, ErrorList* els);
Token* extractDataTypeFromSymbolTable(ASTNode* astIdNode, ErrorList* els);

Token* compatibleDataTypes(Token* t1, Token* t2,Token* operator);
int assignableDataTypes(Token* t1,Token* t2);
Token* extractFieldDataType(SymbolTable* st,Token* recordId,Token* fieldId,ErrorList* els);
char* getDataType(Token* t);
