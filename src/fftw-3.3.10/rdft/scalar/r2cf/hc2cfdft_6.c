/*
 * Copyright (c) 2003, 2007-14 Matteo Frigo
 * Copyright (c) 2003, 2007-14 Massachusetts Institute of Technology
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
 *
 */

/* This file was automatically generated --- DO NOT EDIT */
/* Generated on Tue Sep 14 10:46:36 EDT 2021 */

#include "rdft/codelet-rdft.h"

#if defined(ARCH_PREFERS_FMA) || defined(ISA_EXTENSION_PREFERS_FMA)

/* Generated by: ../../../genfft/gen_hc2cdft.native -fma -compact -variables 4 -pipeline-latency 4 -n 6 -dit -name hc2cfdft_6 -include rdft/scalar/hc2cf.h */

/*
 * This function contains 58 FP additions, 44 FP multiplications,
 * (or, 36 additions, 22 multiplications, 22 fused multiply/add),
 * 27 stack variables, 2 constants, and 24 memory accesses
 */
#include "rdft/scalar/hc2cf.h"

static void hc2cfdft_6(R *Rp, R *Ip, R *Rm, R *Im, const R *W, stride rs, INT mb, INT me, INT ms)
{
     DK(KP866025403, +0.866025403784438646763723170752936183471402627);
     DK(KP500000000, +0.500000000000000000000000000000000000000000000);
     {
	  INT m;
	  for (m = mb, W = W + ((mb - 1) * 10); m < me; m = m + 1, Rp = Rp + ms, Ip = Ip + ms, Rm = Rm - ms, Im = Im - ms, W = W + 10, MAKE_VOLATILE_STRIDE(24, rs)) {
	       E T3, TQ, TJ, T12, Tu, TX, TB, T10, Td, TS, Tk, TV;
	       {
		    E T1, T2, TI, TD, TE, TF;
		    T1 = Ip[0];
		    T2 = Im[0];
		    TI = T1 + T2;
		    TD = Rm[0];
		    TE = Rp[0];
		    TF = TD - TE;
		    T3 = T1 - T2;
		    TQ = TE + TD;
		    {
			 E TC, TG, TH, T11;
			 TC = W[0];
			 TG = TC * TF;
			 TH = W[1];
			 T11 = TH * TF;
			 TJ = FNMS(TH, TI, TG);
			 T12 = FMA(TC, TI, T11);
		    }
	       }
	       {
		    E To, TA, Tt, Tx;
		    {
			 E Tm, Tn, Tr, Ts;
			 Tm = Rm[WS(rs, 2)];
			 Tn = Rp[WS(rs, 2)];
			 To = Tm - Tn;
			 TA = Tn + Tm;
			 Tr = Ip[WS(rs, 2)];
			 Ts = Im[WS(rs, 2)];
			 Tt = Tr + Ts;
			 Tx = Tr - Ts;
		    }
		    {
			 E Tp, TW, Tl, Tq;
			 Tl = W[8];
			 Tp = Tl * To;
			 TW = Tl * Tt;
			 Tq = W[9];
			 Tu = FNMS(Tq, Tt, Tp);
			 TX = FMA(Tq, To, TW);
		    }
		    {
			 E Tw, Ty, Tz, TZ;
			 Tw = W[6];
			 Ty = Tw * Tx;
			 Tz = W[7];
			 TZ = Tz * Tx;
			 TB = FNMS(Tz, TA, Ty);
			 T10 = FMA(Tw, TA, TZ);
		    }
	       }
	       {
		    E T7, Tg, Tc, Tj;
		    {
			 E T5, T6, Ta, Tb;
			 T5 = Ip[WS(rs, 1)];
			 T6 = Im[WS(rs, 1)];
			 T7 = T5 + T6;
			 Tg = T5 - T6;
			 Ta = Rp[WS(rs, 1)];
			 Tb = Rm[WS(rs, 1)];
			 Tc = Ta - Tb;
			 Tj = Ta + Tb;
		    }
		    {
			 E T4, T8, T9, TR;
			 T4 = W[5];
			 T8 = T4 * T7;
			 T9 = W[4];
			 TR = T9 * T7;
			 Td = FMA(T9, Tc, T8);
			 TS = FNMS(T4, Tc, TR);
		    }
		    {
			 E Tf, Th, Ti, TU;
			 Tf = W[2];
			 Th = Tf * Tg;
			 Ti = W[3];
			 TU = Ti * Tg;
			 Tk = FNMS(Ti, Tj, Th);
			 TV = FMA(Tf, Tj, TU);
		    }
	       }
	       {
		    E Te, T1d, TL, T1g, T1c, T1e, T19, T1f;
		    Te = T3 - Td;
		    T1d = TQ + TS;
		    {
			 E Tv, TK, T1a, T1b;
			 Tv = Tk + Tu;
			 TK = TB + TJ;
			 TL = Tv + TK;
			 T1g = Tv - TK;
			 T1a = TV + TX;
			 T1b = T10 + T12;
			 T1c = T1a - T1b;
			 T1e = T1a + T1b;
		    }
		    Ip[0] = KP500000000 * (Te + TL);
		    Rp[0] = KP500000000 * (T1d + T1e);
		    T19 = FNMS(KP500000000, TL, Te);
		    Ip[WS(rs, 2)] = KP500000000 * (FMA(KP866025403, T1c, T19));
		    Im[WS(rs, 1)] = -(KP500000000 * (FNMS(KP866025403, T1c, T19)));
		    T1f = FNMS(KP500000000, T1e, T1d);
		    Rp[WS(rs, 2)] = KP500000000 * (FNMS(KP866025403, T1g, T1f));
		    Rm[WS(rs, 1)] = KP500000000 * (FMA(KP866025403, T1g, T1f));
	       }
	       {
		    E TP, TT, TO, T16, T14, T18, T15, T17;
		    TP = Td + T3;
		    TT = TQ - TS;
		    {
			 E TM, TN, TY, T13;
			 TM = Tu - Tk;
			 TN = TJ - TB;
			 TO = TM + TN;
			 T16 = TN - TM;
			 TY = TV - TX;
			 T13 = T10 - T12;
			 T14 = TY + T13;
			 T18 = T13 - TY;
		    }
		    Im[WS(rs, 2)] = KP500000000 * (TO - TP);
		    Rm[WS(rs, 2)] = KP500000000 * (TT + T14);
		    T15 = FNMS(KP500000000, T14, TT);
		    Rp[WS(rs, 1)] = KP500000000 * (FMA(KP866025403, T16, T15));
		    Rm[0] = KP500000000 * (FNMS(KP866025403, T16, T15));
		    T17 = FMA(KP500000000, TO, TP);
		    Ip[WS(rs, 1)] = KP500000000 * (FMA(KP866025403, T18, T17));
		    Im[0] = -(KP500000000 * (FNMS(KP866025403, T18, T17)));
	       }
	  }
     }
}

static const tw_instr twinstr[] = {
     { TW_FULL, 1, 6 },
     { TW_NEXT, 1, 0 }
};

static const hc2c_desc desc = { 6, "hc2cfdft_6", twinstr, &GENUS, { 36, 22, 22, 0 } };

void X(codelet_hc2cfdft_6) (planner *p) {
     X(khc2c_register) (p, hc2cfdft_6, &desc, HC2C_VIA_DFT);
}
#else

/* Generated by: ../../../genfft/gen_hc2cdft.native -compact -variables 4 -pipeline-latency 4 -n 6 -dit -name hc2cfdft_6 -include rdft/scalar/hc2cf.h */

/*
 * This function contains 58 FP additions, 36 FP multiplications,
 * (or, 44 additions, 22 multiplications, 14 fused multiply/add),
 * 40 stack variables, 3 constants, and 24 memory accesses
 */
#include "rdft/scalar/hc2cf.h"

static void hc2cfdft_6(R *Rp, R *Ip, R *Rm, R *Im, const R *W, stride rs, INT mb, INT me, INT ms)
{
     DK(KP250000000, +0.250000000000000000000000000000000000000000000);
     DK(KP500000000, +0.500000000000000000000000000000000000000000000);
     DK(KP433012701, +0.433012701892219323381861585376468091735701313);
     {
	  INT m;
	  for (m = mb, W = W + ((mb - 1) * 10); m < me; m = m + 1, Rp = Rp + ms, Ip = Ip + ms, Rm = Rm - ms, Im = Im - ms, W = W + 10, MAKE_VOLATILE_STRIDE(24, rs)) {
	       E T3, TM, Tc, TN, Ts, T10, TI, TR, TF, T11, TH, TU;
	       {
		    E T1, T2, TD, Tz, TA, TB, T7, Tf, Tb, Th, Tq, Tw, Tm, Tu, T4;
		    E T8;
		    {
			 E T5, T6, T9, Ta;
			 T1 = Ip[0];
			 T2 = Im[0];
			 TD = T1 + T2;
			 Tz = Rm[0];
			 TA = Rp[0];
			 TB = Tz - TA;
			 T5 = Ip[WS(rs, 1)];
			 T6 = Im[WS(rs, 1)];
			 T7 = T5 + T6;
			 Tf = T5 - T6;
			 T9 = Rp[WS(rs, 1)];
			 Ta = Rm[WS(rs, 1)];
			 Tb = T9 - Ta;
			 Th = T9 + Ta;
			 {
			      E To, Tp, Tk, Tl;
			      To = Rp[WS(rs, 2)];
			      Tp = Rm[WS(rs, 2)];
			      Tq = To - Tp;
			      Tw = To + Tp;
			      Tk = Ip[WS(rs, 2)];
			      Tl = Im[WS(rs, 2)];
			      Tm = Tk + Tl;
			      Tu = Tk - Tl;
			 }
		    }
		    T3 = T1 - T2;
		    TM = TA + Tz;
		    T4 = W[5];
		    T8 = W[4];
		    Tc = FMA(T4, T7, T8 * Tb);
		    TN = FNMS(T4, Tb, T8 * T7);
		    {
			 E Ti, TP, Tr, TQ;
			 {
			      E Te, Tg, Tj, Tn;
			      Te = W[2];
			      Tg = W[3];
			      Ti = FNMS(Tg, Th, Te * Tf);
			      TP = FMA(Tg, Tf, Te * Th);
			      Tj = W[9];
			      Tn = W[8];
			      Tr = FMA(Tj, Tm, Tn * Tq);
			      TQ = FNMS(Tj, Tq, Tn * Tm);
			 }
			 Ts = Ti - Tr;
			 T10 = TP + TQ;
			 TI = Ti + Tr;
			 TR = TP - TQ;
		    }
		    {
			 E Tx, TS, TE, TT;
			 {
			      E Tt, Tv, Ty, TC;
			      Tt = W[6];
			      Tv = W[7];
			      Tx = FNMS(Tv, Tw, Tt * Tu);
			      TS = FMA(Tv, Tu, Tt * Tw);
			      Ty = W[0];
			      TC = W[1];
			      TE = FNMS(TC, TD, Ty * TB);
			      TT = FMA(TC, TB, Ty * TD);
			 }
			 TF = Tx + TE;
			 T11 = TS + TT;
			 TH = TE - Tx;
			 TU = TS - TT;
		    }
	       }
	       {
		    E T12, Td, TG, TZ;
		    T12 = KP433012701 * (T10 - T11);
		    Td = T3 - Tc;
		    TG = Ts + TF;
		    TZ = FNMS(KP250000000, TG, KP500000000 * Td);
		    Ip[0] = KP500000000 * (Td + TG);
		    Im[WS(rs, 1)] = T12 - TZ;
		    Ip[WS(rs, 2)] = TZ + T12;
	       }
	       {
		    E T16, T13, T14, T15;
		    T16 = KP433012701 * (Ts - TF);
		    T13 = TM + TN;
		    T14 = T10 + T11;
		    T15 = FNMS(KP250000000, T14, KP500000000 * T13);
		    Rp[WS(rs, 2)] = T15 - T16;
		    Rp[0] = KP500000000 * (T13 + T14);
		    Rm[WS(rs, 1)] = T16 + T15;
	       }
	       {
		    E TY, TJ, TK, TX;
		    TY = KP433012701 * (TU - TR);
		    TJ = TH - TI;
		    TK = Tc + T3;
		    TX = FMA(KP500000000, TK, KP250000000 * TJ);
		    Im[WS(rs, 2)] = KP500000000 * (TJ - TK);
		    Im[0] = TY - TX;
		    Ip[WS(rs, 1)] = TX + TY;
	       }
	       {
		    E TL, TO, TV, TW;
		    TL = KP433012701 * (TI + TH);
		    TO = TM - TN;
		    TV = TR + TU;
		    TW = FNMS(KP250000000, TV, KP500000000 * TO);
		    Rp[WS(rs, 1)] = TL + TW;
		    Rm[WS(rs, 2)] = KP500000000 * (TO + TV);
		    Rm[0] = TW - TL;
	       }
	  }
     }
}

static const tw_instr twinstr[] = {
     { TW_FULL, 1, 6 },
     { TW_NEXT, 1, 0 }
};

static const hc2c_desc desc = { 6, "hc2cfdft_6", twinstr, &GENUS, { 44, 22, 14, 0 } };

void X(codelet_hc2cfdft_6) (planner *p) {
     X(khc2c_register) (p, hc2cfdft_6, &desc, HC2C_VIA_DFT);
}
#endif
