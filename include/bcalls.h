#ifdef TI83P
unsigned char Bit_VertSplit();
unsigned char CheckSplitFlag();
void ClearRow(unsigned char a);
void ClrLCD();
void ClrLCDFull();
void ClrOP2S();
void ClrScrn();
void ClrScrnFull();
void ClrTxtShd();
void DispDone();
void DispHL(int n);
void DisplayImage(void *img, int loc);
void DispOP1A(unsigned char maxdigits);
void EraseEOL();
int FormBase();
int FormDCplx();
int FormEReal(unsigned char maxwidth);
int FormReal(unsigned char maxwidth);
void LoadPattern(unsigned char charequate);
void *Load_SFont(unsigned int offset);
void NewLine();
void OutputExpr(unsigned char col, unsigned char row);
void PutC(char c);
void PutMap(char c);
void PutPS(char *str);
void PutPSB(char *str);
void PutS(char *str);
void PutTokString(int tok);
void RestoreDisp(void *data, unsigned char numrows);
void RunIndicOff();
void RunIndicOn();
void SaveDisp(void *ptr);
void SetNorm_Vals();
unsigned char SFont_Len(unsigned int offset);
unsigned int SStringLength(char *str);
void VPutMap(char c);
void VPutS(char *str);
void VPutSN(char *str, unsigned char len);
void CloseEditBuf();
void CloseEditBufNoR();
void CloseEditEqu();
void CursorOff();
void CursorOn();
void DispEOL();
unsigned char IsEditEmpty();
char *KeyToString(int key);
void ReleaseBuffer();
void ErrArgument();
void ErrBadGuess();
void ErrBreak();
void ErrD_OP1_0();
void ErrD_OP1_LE_0();
void ErrD_OP1Not_R();
void ErrD_OP1NotPos();
void ErrD_OP1NotPosInt();
void ErrDataType();
void ErrDimension();
void ErrDimMismatch();
void ErrDivBy0();
void ErrDomain();
void ErrIncrement();
void ErrInvalid();
void ErrIterations();
void ErrLinkXmit();
void ErrMemory();
void ErrNon_Real();
void ErrNonReal(unsigned char numargs);
void ErrNotEnoughMem(unsigned int size);
void ErrOverflow();
void ErrSignChange();
void ErrSingularMat();
void ErrStat();
void ErrStatPlot();
void ErrSyntax();
void ErrTolTooSmall();
void ErrUndefined();
void JError(unsigned char flags);
void JErrorNo();
void AllocFPS(unsigned int entries);
void AllocFPS1(unsigned int size);
void CpyStack(unsigned char bytes, void *freebyte, void *copyto);
void CpyO1ToFPST();
void CpyO1ToFPS1();
void CpyO1ToFPS2();
void CpyO1ToFPS3();
void CpyO1ToFPS4();
void CpyO1ToFPS5();
void CpyO1ToFPS6();
void CpyO1ToFPS7();
void CpyO2ToFPST();
void CpyO2ToFPS1();
void CpyO2ToFPS2();
void CpyO2ToFPS3();
void CpyO2ToFPS4();
void CpyO3ToFPST();
void CpyO3ToFPS1();
void CpyO3ToFPS2();
void CpyO5ToFPS1();
void CpyO5ToFPS3();
void CpyO6ToFPST();
void CpyO6ToFPS2();
void CpyTo1FPST();
void CpyTo1FPS1();
void CpyTo1FPS2();
void CpyTo1FPS3();
void CpyTo1FPS4();
void CpyTo1FPS5();
void CpyTo1FPS6();
void CpyTo1FPS7();
void CpyTo1FPS8();
void CpyTo1FPS9();
void CpyTo1FPS10();
void CpyTo1FPS11();
void CpyTo2FPST();
void CpyTo2FPS1();
void CpyTo2FPS2();
void CpyTo2FPS3();
void CpyTo2FPS4();
void CpyTo2FPS5();
void CpyTo2FPS6();
void CpyTo2FPS7();
void CpyTo2FPS8();
void CpyTo3FPST();
void CpyTo3FPS1();
void CpyTo3FPS2();
void CpyTo4FPST();
void CpyTo5FPST();
void CpyTo6FPST();
void CpyTo6FPS2();
void CpyTo6FPS3();
void CpyToFPST(void *ptr);
void CpyToFPS1(void *ptr);
void CpyToFPS2(void *ptr);
void CpyToFPS3(void *ptr);
void CpyToStack(unsigned char bytes, void *freebyte, void *from);
void PopMCplxO1();
void PopOP1();
void PopOP3();
void PopOP5();
void PopReal(void *ptr);
void PopRealO1();
void PopRealO2();
void PopRealO3();
void PopRealO4();
void PopRealO5();
void PopRealO6();
void PushMCplxO1();
void PushMCplxO3();
void PushOP1();
void PushOP3();
void PushOP5();
void PushReal(void *ptr);
void PushRealO1();
void PushRealO2();
void PushRealO3();
void PushRealO4();
void PushRealO5();
void PushRealO6();
void AllEq(unsigned char flags);
void BufClr(void *ptr);
void BufCpy(void *ptr);
void CircCmd();
void ClearRect(unsigned char row1, unsigned char col1, unsigned char row2,
    unsigned char col2);
void CLine();
void CLineS();
void CPoint(unsigned char op);
void CPointS(unsigned char op);
void DarkLine(unsigned char x1, unsigned char y1, unsigned char x2,
    unsigned char y2);
void DarkPnt();
void Disp();
void DrawCirc2();
void DrawCmd();
void DrawRectBorder(unsigned char row1, unsigned char col1,
    unsigned char row2, unsigned char col2);
void DrawRectBorderClear(unsigned char row1, unsigned char col1,
    unsigned char row2, unsigned char col2);
void EraseRectBorder(unsigned char row1, unsigned char col1,
    unsigned char row2, unsigned char col2);
void FillRect(unsigned char row1, unsigned char col1,
    unsigned char row2, unsigned char col2);
void FillRectPattern(unsigned char row1, unsigned char col1,
    unsigned char row2, unsigned char col2);
void GrBufClr();
void GrBufCpy();
void GrphCirc();
void HorizCmd();
unsigned char IBounds(unsigned char x, unsigned char y);
unsigned char IBoundsFull(unsigned char x, unsigned char y);
void ILine(unsigned char x1, unsigned char y1, unsigned char x2,
    unsigned char y2, unsigned char type);
void InvCmd();
void InvertRect(unsigned char row1, unsigned char col1,
    unsigned char row2, unsigned char col2);
unsigned long IOffset(unsigned char col, unsigned char row);
unsigned char IPoint(unsigned char col, unsigned char row,
    unsigned char func);
void LineCmd();
void PDspGrph();
unsigned char PixelTest();
void PointCmd(unsigned char cmd);
void PointOn(unsigned char x, unsigned char y);
void Regraph();
void SetAllPlots(unsigned char select);
void SetFuncM();
void SetParM();
void SetPolM();
void SetSeqM();
void SetTblGraphDraw();
void TanLnF();
void UCLineS();
void UnLineCmd();
void VertCmd();
void VtoWHLDE(unsigned char x, unsigned char y);
unsigned char XftoI(void *ptr);
void Xitof(unsigned char x, void *ptr);
unsigned char YftoI(void *ptr);
void ZmDecml();
void ZmFit();
void ZmInt();
void ZmPrev();
void ZmSquare();
void ZmStats();
void ZmTrig();
void ZmUsr();
void ZooDefault();
unsigned long DivHLBy10(unsigned int hl);
unsigned long DivHLByA(unsigned int hl, unsigned char a);
void AppGetCalc();
void AppGetCbl();
unsigned char Rec1stByte();
unsigned char Rec1stByteNC();
unsigned char RecAByteIO();
void SendAByte(unsigned char byte);
void SendVarCmd();
#endif
