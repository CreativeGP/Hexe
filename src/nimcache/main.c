/* Generated by Nim Compiler v0.16.0 */
/*   (c) 2017 Andreas Rumpf */
/* The generated code is subject to the original license. */
/* Compiled for: Linux, amd64, gcc */
/* Command for C compiler:
   gcc -c  -w  -I/usr/lib/nim -o /home/cgp/Develop/hexe/nimcache/main.o /home/cgp/Develop/hexe/nimcache/main.c */
#define NIM_INTBITS 64

#include "nimbase.h"
#include <stdio.h>
#include <string.h>
#undef linux
typedef struct Appobj_uj5sjR3DSuqSViTjIhavvQ Appobj_uj5sjR3DSuqSViTjIhavvQ;
typedef struct TGenericSeq TGenericSeq;
typedef struct NimStringDesc NimStringDesc;
typedef union Event_NT5PKfaL3rfxfEzQMihptw Event_NT5PKfaL3rfxfEzQMihptw;
typedef struct Commoneventobj_Py5pzTaMjgDVBExbdXgKFw Commoneventobj_Py5pzTaMjgDVBExbdXgKFw;
typedef struct Displayeventobj_o9aNCNNLJGpafAjzCvXPr9bQ Displayeventobj_o9aNCNNLJGpafAjzCvXPr9bQ;
typedef struct Windoweventobj_rMipjZiVKVw28sNceqYxuw Windoweventobj_rMipjZiVKVw28sNceqYxuw;
typedef struct Keyboardeventobj_WuAAw9ayJbtiDi4R7X4BCGg Keyboardeventobj_WuAAw9ayJbtiDi4R7X4BCGg;
typedef struct Keysym_9a7STppugJenQmkMcY19cH3Q Keysym_9a7STppugJenQmkMcY19cH3Q;
typedef struct Texteditingeventobj_e6ZJQWpPOV6fnjwVjk5xgA Texteditingeventobj_e6ZJQWpPOV6fnjwVjk5xgA;
typedef struct Textinputeventobj_tHQnpSrdZWXcabc9bAFnwRw Textinputeventobj_tHQnpSrdZWXcabc9bAFnwRw;
typedef struct Mousemotioneventobj_tZGG3QElMSQMOtOR8FJigA Mousemotioneventobj_tZGG3QElMSQMOtOR8FJigA;
typedef struct Mousebuttoneventobj_PxG4Y9a9a6jhcvRxaljjNzeQ Mousebuttoneventobj_PxG4Y9a9a6jhcvRxaljjNzeQ;
typedef struct Mousewheeleventobj_24an2OH9cfintND7OMGXOSQ Mousewheeleventobj_24an2OH9cfintND7OMGXOSQ;
typedef struct Joyaxiseventobj_uw0t0u3f9aJ7lIVO6Wnqymw Joyaxiseventobj_uw0t0u3f9aJ7lIVO6Wnqymw;
typedef struct Joyballeventobj_dHtVw1L6fOcI49amm024iEA Joyballeventobj_dHtVw1L6fOcI49amm024iEA;
typedef struct Joyhateventobj_BqMeXjQ3abTp1BlbS87UdQ Joyhateventobj_BqMeXjQ3abTp1BlbS87UdQ;
typedef struct Joybuttoneventobj_9bGpcZV0ba7ad7sSX9amCLoA Joybuttoneventobj_9bGpcZV0ba7ad7sSX9amCLoA;
typedef struct Joydeviceeventobj_SYmzvnnMg54mt6meeDFSkA Joydeviceeventobj_SYmzvnnMg54mt6meeDFSkA;
typedef struct Controlleraxiseventobj_vg7gTG2sYTlHKVi9cFTwdsQ Controlleraxiseventobj_vg7gTG2sYTlHKVi9cFTwdsQ;
typedef struct Controllerbuttoneventobj_JCI9aJswV5pbR8GVeDUZrNw Controllerbuttoneventobj_JCI9aJswV5pbR8GVeDUZrNw;
typedef struct Controllerdeviceeventobj_jk3khyfKZsFOx3t82Bt35w Controllerdeviceeventobj_jk3khyfKZsFOx3t82Bt35w;
typedef struct Audiodeviceeventobj_lKePD4FKNrK75bdZWniACg Audiodeviceeventobj_lKePD4FKNrK75bdZWniACg;
typedef struct Sensoreventobj_lp752bOrZO44FrW3ymBYAw Sensoreventobj_lp752bOrZO44FrW3ymBYAw;
typedef struct Quiteventobj_n6QwLLEF9bwOze4qnKxoljw Quiteventobj_n6QwLLEF9bwOze4qnKxoljw;
typedef struct Usereventobj_MAwVQs0rbcBcQG1VsjHA0g Usereventobj_MAwVQs0rbcBcQG1VsjHA0g;
typedef struct Syswmeventobj_VLLtsWkCWXlheVKlFOIbBQ Syswmeventobj_VLLtsWkCWXlheVKlFOIbBQ;
typedef struct Touchfingereventobj_0pz0iUmZZJ16fvpG3ojijA Touchfingereventobj_0pz0iUmZZJ16fvpG3ojijA;
typedef struct Multigestureeventobj_KibL9byWrTBFbr9aPdCqKbew Multigestureeventobj_KibL9byWrTBFbr9aPdCqKbew;
typedef struct Dollargestureeventobj_XphXvfWOgSZ6i7xklGuhyA Dollargestureeventobj_XphXvfWOgSZ6i7xklGuhyA;
typedef struct Dropeventobj_LKqmsykaSvleoOUXbYvFvQ Dropeventobj_LKqmsykaSvleoOUXbYvFvQ;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Cell_1zcF9cV8XIAtbN8h5HRUB8g Cell_1zcF9cV8XIAtbN8h5HRUB8g;
typedef struct Cellseq_Axo1XVm9aaQueTOldv8le5w Cellseq_Axo1XVm9aaQueTOldv8le5w;
typedef struct Gcheap_1TRH1TZMaVZTnLNcIHuNFQ Gcheap_1TRH1TZMaVZTnLNcIHuNFQ;
typedef struct Gcstack_7fytPA5bBsob6See21YMRA Gcstack_7fytPA5bBsob6See21YMRA;
typedef struct Memregion_x81NhDv59b8ercDZ9bi85jyg Memregion_x81NhDv59b8ercDZ9bi85jyg;
typedef struct Smallchunk_tXn60W2f8h3jgAYdEmy5NQ Smallchunk_tXn60W2f8h3jgAYdEmy5NQ;
typedef struct Llchunk_XsENErzHIZV9bhvyJx56wGw Llchunk_XsENErzHIZV9bhvyJx56wGw;
typedef struct Bigchunk_Rv9c70Uhp2TytkX7eH78qEg Bigchunk_Rv9c70Uhp2TytkX7eH78qEg;
typedef struct Intset_EZObFrE3NC9bIb3YMkY9crZA Intset_EZObFrE3NC9bIb3YMkY9crZA;
typedef struct Trunk_W0r8S0Y3UGke6T9bIUWnnuw Trunk_W0r8S0Y3UGke6T9bIUWnnuw;
typedef struct Avlnode_IaqjtwKhxLEpvDS9bct9blEw Avlnode_IaqjtwKhxLEpvDS9bct9blEw;
typedef struct Gcstat_0RwLoVBHZPfUAcLczmfQAg Gcstat_0RwLoVBHZPfUAcLczmfQAg;
typedef struct Cellset_jG87P0AI9aZtss9ccTYBIISQ Cellset_jG87P0AI9aZtss9ccTYBIISQ;
typedef struct Pagedesc_fublkgIY4LG3mT51LU2WHg Pagedesc_fublkgIY4LG3mT51LU2WHg;
typedef struct Basechunk_Sdq7WpT6qAH858F5ZEdG3w Basechunk_Sdq7WpT6qAH858F5ZEdG3w;
typedef struct Freecell_u6M5LHprqzkn9axr04yg9bGQ Freecell_u6M5LHprqzkn9axr04yg9bGQ;
typedef N_CDECL_PTR(int, TY_qLs9bEMEYHZYOeFIf1LOpoQ) (NU32 flags0);
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef N_CDECL_PTR(NCSTRING, TY_09bvyvHFtWbkzL5AHgf0bKw) (void);
struct  Appobj_uj5sjR3DSuqSViTjIhavvQ  {
void* window;
void* renderer;
};
typedef N_CDECL_PTR(void*, TY_hKarI59cLAeI0v1WuQhCZ9ag) (NCSTRING title0, int x0, int y0, int w0, int h0, NU32 flags0);
typedef N_CDECL_PTR(void*, TY_jPHHnsvDYo8Q3NQemQIGWg) (void* window0, int index0, NU32 flags0);
typedef N_CDECL_PTR(int, TY_buOIiiD42E5nxpbw32t0bA) (void* renderer0, NU8 r0, NU8 g0, NU8 b0, NU8 a0);
typedef NI32 Eventkind_EsZhlcfytIsxALaI7nZ2OQ;
struct  Commoneventobj_Py5pzTaMjgDVBExbdXgKFw  {
Eventkind_EsZhlcfytIsxALaI7nZ2OQ kind;
NU32 timestamp;
};
struct  Displayeventobj_o9aNCNNLJGpafAjzCvXPr9bQ  {
Eventkind_EsZhlcfytIsxALaI7nZ2OQ kind;
NU32 timestamp;
NU32 display;
NU8 event;
NU8 padding1;
NU8 padding2;
NU8 padding3;
NI32 data1;
};
typedef NU8 Windoweventid_A0bhkjGAhyRjY4uTwWUqzw;
struct  Windoweventobj_rMipjZiVKVw28sNceqYxuw  {
Eventkind_EsZhlcfytIsxALaI7nZ2OQ kind;
NU32 timestamp;
NU32 windowid;
Windoweventid_A0bhkjGAhyRjY4uTwWUqzw event;
NU8 padding1;
NU8 padding2;
NU8 padding3;
NI32 data1;
NI32 data2;
};
typedef NI32 Scancode_pV4uroLoxCNb1YXcIzhICw;
typedef NI32 Keycode_4JhAkMHsSpfaaoatfOE3Lw;
struct  Keysym_9a7STppugJenQmkMcY19cH3Q  {
Scancode_pV4uroLoxCNb1YXcIzhICw scancode;
Keycode_4JhAkMHsSpfaaoatfOE3Lw sym;
NU16 mods;
NU32 unused;
};
struct  Keyboardeventobj_WuAAw9ayJbtiDi4R7X4BCGg  {
Eventkind_EsZhlcfytIsxALaI7nZ2OQ kind;
NU32 timestamp;
NU32 windowid;
NU8 state;
NU8 repeat;
NU8 padding2;
NU8 padding3;
Keysym_9a7STppugJenQmkMcY19cH3Q keysym;
};
typedef NIM_CHAR TY_x9aRkN8DVcTBDUl3hEPJutg[32];
struct  Texteditingeventobj_e6ZJQWpPOV6fnjwVjk5xgA  {
Eventkind_EsZhlcfytIsxALaI7nZ2OQ kind;
NU32 timestamp;
NU32 windowid;
TY_x9aRkN8DVcTBDUl3hEPJutg text;
NI32 start;
NI32 length;
};
struct  Textinputeventobj_tHQnpSrdZWXcabc9bAFnwRw  {
Eventkind_EsZhlcfytIsxALaI7nZ2OQ kind;
NU32 timestamp;
NU32 windowid;
TY_x9aRkN8DVcTBDUl3hEPJutg text;
};
struct  Mousemotioneventobj_tZGG3QElMSQMOtOR8FJigA  {
Eventkind_EsZhlcfytIsxALaI7nZ2OQ kind;
NU32 timestamp;
NU32 windowid;
NU32 which;
NU32 state;
NI32 x;
NI32 y;
NI32 xrel;
NI32 yrel;
};
struct  Mousebuttoneventobj_PxG4Y9a9a6jhcvRxaljjNzeQ  {
Eventkind_EsZhlcfytIsxALaI7nZ2OQ kind;
NU32 timestamp;
NU32 windowid;
NU32 which;
NU8 button;
NU8 state;
NU8 clicks;
NU8 padding1;
NI32 x;
NI32 y;
};
typedef NI32 Mousewheeldirection_s5b18B0UfQKsO06UCJDCvw;
struct  Mousewheeleventobj_24an2OH9cfintND7OMGXOSQ  {
Eventkind_EsZhlcfytIsxALaI7nZ2OQ kind;
NU32 timestamp;
NU32 windowid;
NU32 which;
NI32 x;
NI32 y;
Mousewheeldirection_s5b18B0UfQKsO06UCJDCvw direction;
};
struct  Joyaxiseventobj_uw0t0u3f9aJ7lIVO6Wnqymw  {
Eventkind_EsZhlcfytIsxALaI7nZ2OQ kind;
NU32 timestamp;
NI32 which;
NU8 axis;
NU8 padding1;
NU8 padding2;
NU8 padding3;
NI16 value;
NU16 padding4;
};
struct  Joyballeventobj_dHtVw1L6fOcI49amm024iEA  {
Eventkind_EsZhlcfytIsxALaI7nZ2OQ kind;
NU32 timestamp;
NI32 which;
NU8 ball;
NU8 padding1;
NU8 padding2;
NU8 padding3;
NI16 xrel;
NI16 yrel;
};
typedef NU8 Hatposition_Z9a9bEuYcdzJUSJdyWutBRtQ;
struct  Joyhateventobj_BqMeXjQ3abTp1BlbS87UdQ  {
Eventkind_EsZhlcfytIsxALaI7nZ2OQ kind;
NU32 timestamp;
NI32 which;
NU8 hat;
Hatposition_Z9a9bEuYcdzJUSJdyWutBRtQ value;
NU8 padding1;
NU8 padding2;
};
struct  Joybuttoneventobj_9bGpcZV0ba7ad7sSX9amCLoA  {
Eventkind_EsZhlcfytIsxALaI7nZ2OQ kind;
NU32 timestamp;
NI32 which;
NU8 button;
NU8 state;
NU8 padding1;
NU8 padding2;
};
struct  Joydeviceeventobj_SYmzvnnMg54mt6meeDFSkA  {
Eventkind_EsZhlcfytIsxALaI7nZ2OQ kind;
NU32 timestamp;
NI32 which;
};
typedef NU8 Gamecontrolleraxis_rfs85p6FSkdgRbf9aaewgHg;
struct  Controlleraxiseventobj_vg7gTG2sYTlHKVi9cFTwdsQ  {
Eventkind_EsZhlcfytIsxALaI7nZ2OQ kind;
NU32 timestamp;
NI32 which;
Gamecontrolleraxis_rfs85p6FSkdgRbf9aaewgHg axis;
NU8 padding1;
NU8 padding2;
NU8 padding3;
NI16 value;
NU16 padding4;
};
typedef NU8 Gamecontrollerbutton_LJjI8O9bqAQ2hoT8I9bKN2dw;
struct  Controllerbuttoneventobj_JCI9aJswV5pbR8GVeDUZrNw  {
Eventkind_EsZhlcfytIsxALaI7nZ2OQ kind;
NU32 timestamp;
NI32 which;
Gamecontrollerbutton_LJjI8O9bqAQ2hoT8I9bKN2dw button;
NU8 state;
NU8 padding1;
NU8 padding2;
};
struct  Controllerdeviceeventobj_jk3khyfKZsFOx3t82Bt35w  {
Eventkind_EsZhlcfytIsxALaI7nZ2OQ kind;
NU32 timestamp;
NI32 which;
};
struct  Audiodeviceeventobj_lKePD4FKNrK75bdZWniACg  {
Eventkind_EsZhlcfytIsxALaI7nZ2OQ kind;
NU32 timestamp;
NU32 which;
NU8 iscapture;
NU8 padding1;
NU8 padding2;
NU8 padding3;
};
typedef float TY_bcCZD120ZH4XloSsubkq6w[6];
struct  Sensoreventobj_lp752bOrZO44FrW3ymBYAw  {
Eventkind_EsZhlcfytIsxALaI7nZ2OQ kind;
NU32 timestamp;
NI32 which;
TY_bcCZD120ZH4XloSsubkq6w data;
};
struct  Quiteventobj_n6QwLLEF9bwOze4qnKxoljw  {
Eventkind_EsZhlcfytIsxALaI7nZ2OQ kind;
NU32 timestamp;
};
struct  Usereventobj_MAwVQs0rbcBcQG1VsjHA0g  {
Eventkind_EsZhlcfytIsxALaI7nZ2OQ kind;
NU32 timestamp;
NU32 windowid;
NI32 code;
void* data1;
void* data2;
};
struct  Syswmeventobj_VLLtsWkCWXlheVKlFOIbBQ  {
Eventkind_EsZhlcfytIsxALaI7nZ2OQ kind;
NU32 timestamp;
void* msg;
};
struct  Touchfingereventobj_0pz0iUmZZJ16fvpG3ojijA  {
Eventkind_EsZhlcfytIsxALaI7nZ2OQ kind;
NU32 timestamp;
NI64 touchid;
NI64 fingerid;
float x;
float y;
float dx;
float dy;
float pressure;
};
struct  Multigestureeventobj_KibL9byWrTBFbr9aPdCqKbew  {
Eventkind_EsZhlcfytIsxALaI7nZ2OQ kind;
NU32 timestamp;
NI64 touchid;
float dtheta;
float ddist;
float x;
float y;
NU16 numfingers;
NU16 padding;
};
struct  Dollargestureeventobj_XphXvfWOgSZ6i7xklGuhyA  {
Eventkind_EsZhlcfytIsxALaI7nZ2OQ kind;
NU32 timestamp;
NI64 touchid;
NI64 gestureid;
NU32 numfingers;
float error;
float x;
float y;
};
struct  Dropeventobj_LKqmsykaSvleoOUXbYvFvQ  {
Eventkind_EsZhlcfytIsxALaI7nZ2OQ kind;
NU32 timestamp;
NCSTRING file;
NU32 windowid;
};
typedef NU8 TY_sH9avbK619blGCGFZhgSDaWg[56];
union  Event_NT5PKfaL3rfxfEzQMihptw  {
Eventkind_EsZhlcfytIsxALaI7nZ2OQ kind;
Commoneventobj_Py5pzTaMjgDVBExbdXgKFw common;
Displayeventobj_o9aNCNNLJGpafAjzCvXPr9bQ display;
Windoweventobj_rMipjZiVKVw28sNceqYxuw window;
Keyboardeventobj_WuAAw9ayJbtiDi4R7X4BCGg key;
Texteditingeventobj_e6ZJQWpPOV6fnjwVjk5xgA edit;
Textinputeventobj_tHQnpSrdZWXcabc9bAFnwRw text;
Mousemotioneventobj_tZGG3QElMSQMOtOR8FJigA motion;
Mousebuttoneventobj_PxG4Y9a9a6jhcvRxaljjNzeQ button;
Mousewheeleventobj_24an2OH9cfintND7OMGXOSQ wheel;
Joyaxiseventobj_uw0t0u3f9aJ7lIVO6Wnqymw jaxis;
Joyballeventobj_dHtVw1L6fOcI49amm024iEA jball;
Joyhateventobj_BqMeXjQ3abTp1BlbS87UdQ jhat;
Joybuttoneventobj_9bGpcZV0ba7ad7sSX9amCLoA jbutton;
Joydeviceeventobj_SYmzvnnMg54mt6meeDFSkA jdevice;
Controlleraxiseventobj_vg7gTG2sYTlHKVi9cFTwdsQ caxis;
Controllerbuttoneventobj_JCI9aJswV5pbR8GVeDUZrNw cbutton;
Controllerdeviceeventobj_jk3khyfKZsFOx3t82Bt35w cdevice;
Audiodeviceeventobj_lKePD4FKNrK75bdZWniACg adevice;
Sensoreventobj_lp752bOrZO44FrW3ymBYAw sensor;
Quiteventobj_n6QwLLEF9bwOze4qnKxoljw quit;
Usereventobj_MAwVQs0rbcBcQG1VsjHA0g user;
Syswmeventobj_VLLtsWkCWXlheVKlFOIbBQ syswm;
Touchfingereventobj_0pz0iUmZZJ16fvpG3ojijA tfinger;
Multigestureeventobj_KibL9byWrTBFbr9aPdCqKbew mgesture;
Dollargestureeventobj_XphXvfWOgSZ6i7xklGuhyA dgesture;
Dropeventobj_LKqmsykaSvleoOUXbYvFvQ drop;
TY_sH9avbK619blGCGFZhgSDaWg padding;
};
typedef N_CDECL_PTR(int, TY_15yOfscvzUa4fkCceQZeBg) (Event_NT5PKfaL3rfxfEzQMihptw* event0);
typedef NI32 Logcategory_53rE8px7tkZw1h4eKH19b6A;
typedef N_CDECL_PTR(void, TY_PWALQuLZ8UDZbXEqot0bSw) (Logcategory_53rE8px7tkZw1h4eKH19b6A category0, NCSTRING fmt0, ...);
typedef NU8 Tnimkind_jIBKr1ejBgsfM33Kxw4j7A;
typedef NU8 Tnimtypeflag_v8QUszD1sWlSIWZz7mC4bQ_Set;
typedef N_NIMCALL_PTR(void, TY_ojoeKfW4VYIm36I9cpDTQIg) (void* p0, NI op0);
typedef N_NIMCALL_PTR(void*, TY_WSm2xU5ARYv9aAR4l0z9c9auQ) (void* p0);
struct  TNimType  {
NI size;
Tnimkind_jIBKr1ejBgsfM33Kxw4j7A kind;
Tnimtypeflag_v8QUszD1sWlSIWZz7mC4bQ_Set flags;
TNimType* base;
TNimNode* node;
void* finalizer;
TY_ojoeKfW4VYIm36I9cpDTQIg marker;
TY_WSm2xU5ARYv9aAR4l0z9c9auQ deepcopy;
};
typedef NU8 Tnimnodekind_unfNsxrcATrufDZmpBq4HQ;
struct  TNimNode  {
Tnimnodekind_unfNsxrcATrufDZmpBq4HQ kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
typedef N_CDECL_PTR(void, TY_32w2ZypAyMWuajvi2Jt79cg) (void* renderer0);
typedef N_CDECL_PTR(void, TY_ln4kdL5W9bbX4a1xl8nnVXQ) (void);
typedef N_NIMCALL_PTR(void, TY_T4eqaYlFJYZUv9aG9b1TV0bQ) (void);
struct  Cell_1zcF9cV8XIAtbN8h5HRUB8g  {
NI refcount;
TNimType* typ;
};
struct  Cellseq_Axo1XVm9aaQueTOldv8le5w  {
NI len;
NI cap;
Cell_1zcF9cV8XIAtbN8h5HRUB8g** d;
};
typedef Smallchunk_tXn60W2f8h3jgAYdEmy5NQ* TY_SiRwrEKZdLgxqz9a9aoVBglg[512];
typedef Trunk_W0r8S0Y3UGke6T9bIUWnnuw* TY_lh2A89ahMmYg9bCmpVaplLbA[256];
struct  Intset_EZObFrE3NC9bIb3YMkY9crZA  {
TY_lh2A89ahMmYg9bCmpVaplLbA data;
};
struct  Memregion_x81NhDv59b8ercDZ9bi85jyg  {
NI minlargeobj;
NI maxlargeobj;
TY_SiRwrEKZdLgxqz9a9aoVBglg freesmallchunks;
Llchunk_XsENErzHIZV9bhvyJx56wGw* llmem;
NI currmem;
NI maxmem;
NI freemem;
NI lastsize;
Bigchunk_Rv9c70Uhp2TytkX7eH78qEg* freechunkslist;
Intset_EZObFrE3NC9bIb3YMkY9crZA chunkstarts;
Avlnode_IaqjtwKhxLEpvDS9bct9blEw* root;
Avlnode_IaqjtwKhxLEpvDS9bct9blEw* deleted;
Avlnode_IaqjtwKhxLEpvDS9bct9blEw* last;
Avlnode_IaqjtwKhxLEpvDS9bct9blEw* freeavlnodes;
NIM_BOOL locked;
NIM_BOOL blockchunksizeincrease;
NI nextchunksize;
};
struct  Gcstat_0RwLoVBHZPfUAcLczmfQAg  {
NI stackscans;
NI cyclecollections;
NI maxthreshold;
NI maxstacksize;
NI maxstackcells;
NI cycletablesize;
NI64 maxpause;
};
struct  Cellset_jG87P0AI9aZtss9ccTYBIISQ  {
NI counter;
NI max;
Pagedesc_fublkgIY4LG3mT51LU2WHg* head;
Pagedesc_fublkgIY4LG3mT51LU2WHg** data;
};
struct  Gcheap_1TRH1TZMaVZTnLNcIHuNFQ  {
Gcstack_7fytPA5bBsob6See21YMRA* stack;
void* stackbottom;
NI cyclethreshold;
Cellseq_Axo1XVm9aaQueTOldv8le5w zct;
Cellseq_Axo1XVm9aaQueTOldv8le5w decstack;
Cellseq_Axo1XVm9aaQueTOldv8le5w tempstack;
NI recgclock;
Memregion_x81NhDv59b8ercDZ9bi85jyg region;
Gcstat_0RwLoVBHZPfUAcLczmfQAg stat;
Cellset_jG87P0AI9aZtss9ccTYBIISQ marked;
Cellseq_Axo1XVm9aaQueTOldv8le5w additionalroots;
};
typedef N_CDECL_PTR(int, TY_fbYpjfe38x3ujjAmVRbI1Q) (void* renderer0);
struct  Gcstack_7fytPA5bBsob6See21YMRA  {
Gcstack_7fytPA5bBsob6See21YMRA* prev;
Gcstack_7fytPA5bBsob6See21YMRA* next;
void* starts;
void* pos;
NI maxstacksize;
};
struct  Basechunk_Sdq7WpT6qAH858F5ZEdG3w  {
NI prevsize;
NI size;
NIM_BOOL used;
};
struct  Smallchunk_tXn60W2f8h3jgAYdEmy5NQ  {
  Basechunk_Sdq7WpT6qAH858F5ZEdG3w Sup;
Smallchunk_tXn60W2f8h3jgAYdEmy5NQ* next;
Smallchunk_tXn60W2f8h3jgAYdEmy5NQ* prev;
Freecell_u6M5LHprqzkn9axr04yg9bGQ* freelist;
NI free;
NI acc;
NF data;
};
struct  Llchunk_XsENErzHIZV9bhvyJx56wGw  {
NI size;
NI acc;
Llchunk_XsENErzHIZV9bhvyJx56wGw* next;
};
struct  Bigchunk_Rv9c70Uhp2TytkX7eH78qEg  {
  Basechunk_Sdq7WpT6qAH858F5ZEdG3w Sup;
Bigchunk_Rv9c70Uhp2TytkX7eH78qEg* next;
Bigchunk_Rv9c70Uhp2TytkX7eH78qEg* prev;
NI align;
NF data;
};
typedef NI TY_9a8QARi5WsUggNU9bom7kzTQ[8];
struct  Trunk_W0r8S0Y3UGke6T9bIUWnnuw  {
Trunk_W0r8S0Y3UGke6T9bIUWnnuw* next;
NI key;
TY_9a8QARi5WsUggNU9bom7kzTQ bits;
};
typedef Avlnode_IaqjtwKhxLEpvDS9bct9blEw* TY_0aOLqZchNi8nWtMTi8ND8w[2];
struct  Avlnode_IaqjtwKhxLEpvDS9bct9blEw  {
TY_0aOLqZchNi8nWtMTi8ND8w link;
NI key;
NI upperbound;
NI level;
};
struct  Pagedesc_fublkgIY4LG3mT51LU2WHg  {
Pagedesc_fublkgIY4LG3mT51LU2WHg* next;
NI key;
TY_9a8QARi5WsUggNU9bom7kzTQ bits;
};
struct  Freecell_u6M5LHprqzkn9axr04yg9bGQ  {
Freecell_u6M5LHprqzkn9axr04yg9bGQ* next;
NI zerofield;
};
N_NIMCALL(NIM_BOOL, init_DxG9bYfX1iBwVsV69bCW9btwA)(Appobj_uj5sjR3DSuqSViTjIhavvQ* app0);
N_NIMCALL(NimStringDesc*, cstrToNimstr)(NCSTRING str0);
static N_INLINE(void, nimFrame)(TFrame* s0);
N_NOINLINE(void, stackoverflow_II46IjNZztN9bmbxUD8dt8g)(void);
static N_INLINE(void, popFrame)(void);
N_NIMCALL(NIM_BOOL, events_ztN46N7XwzbTMOqYgln5iA)(void);
N_NIMCALL(NimStringDesc*, reprEnum)(NI e0, TNimType* typ0);
N_NIMCALL(void, exit_LOpuFmAaC7VceR5Wr4nB5A)(Appobj_uj5sjR3DSuqSViTjIhavvQ* app0);
static N_NIMCALL(void, Marker_TY_z9atM4YfOD8zxq044AkEW7w)(void* p, NI op);
N_NIMCALL(void, nimGCvisit)(void* d0, NI op0);
static N_NIMCALL(void, T_V45tF8B8NBcxFcjfe7lhBw_9)(void);
N_NIMCALL(void, nimRegisterGlobalMarker)(TY_T4eqaYlFJYZUv9aG9b1TV0bQ markerproc0);
N_NIMCALL(void*, newObj)(TNimType* typ0, NI size0);
static N_INLINE(void, asgnRefNoCycle)(void** dest0, void* src0);
static N_INLINE(Cell_1zcF9cV8XIAtbN8h5HRUB8g*, usrtocell_yB9aH5WIlwd0xkYrcdPeXrQsystem)(void* usr0);
static N_INLINE(void, rtladdzct_MV4BBk6J1qu70IbBxwEn4w_2system)(Cell_1zcF9cV8XIAtbN8h5HRUB8g* c0);
N_NOINLINE(void, addzct_fCDI7oO1NNVXXURtxSzsRw)(Cellseq_Axo1XVm9aaQueTOldv8le5w* s0, Cell_1zcF9cV8XIAtbN8h5HRUB8g* c0);
static N_INLINE(void, initStackBottomWith)(void* locals0);
N_NOINLINE(void, setStackBottom)(void* thestackbottom0);
NIM_EXTERNC N_NOINLINE(void, systemInit000)(void);
NIM_EXTERNC N_NOINLINE(void, systemDatInit000)(void);
NIM_EXTERNC N_NOINLINE(void, unknown_sdlInit000)(void);
NIM_EXTERNC N_NOINLINE(void, unknown_sdlDatInit000)(void);
NIM_EXTERNC N_NOINLINE(void, NimMainModule)(void);
NIM_EXTERNC N_NOINLINE(void, mainDatInit000)(void);
extern TY_qLs9bEMEYHZYOeFIf1LOpoQ Dl_100825;
extern TY_09bvyvHFtWbkzL5AHgf0bKw Dl_101933;
extern TY_hKarI59cLAeI0v1WuQhCZ9ag Dl_105912;
extern TY_jPHHnsvDYo8Q3NQemQIGWg Dl_109752;
extern TY_buOIiiD42E5nxpbw32t0bA Dl_109935;
extern TFrame* frameptr_HRfVMH3jYeBJz6Q6X9b6Ptw;
extern TY_15yOfscvzUa4fkCceQZeBg Dl_108849;
extern TY_PWALQuLZ8UDZbXEqot0bSw Dl_109505;
extern TNimType NTI_4JhAkMHsSpfaaoatfOE3Lw;
extern TY_32w2ZypAyMWuajvi2Jt79cg Dl_110053;
extern TY_32w2ZypAyMWuajvi2Jt79cg Dl_106134;
extern TY_ln4kdL5W9bbX4a1xl8nnVXQ Dl_100837;
Appobj_uj5sjR3DSuqSViTjIhavvQ* app_kU8s08R79a31ZN3xV9bMxJBQ;
TNimType NTI_uj5sjR3DSuqSViTjIhavvQ;
extern TNimType NTI_vr5DoT1jILTGdRlYv1OYpw;
TNimType NTI_z9atM4YfOD8zxq044AkEW7w;
extern Gcheap_1TRH1TZMaVZTnLNcIHuNFQ gch_IcYaEuuWivYAS86vFMTS3Q;
NIM_BOOL done_i0QG7qEPgHTmDD9behbmJmg;
extern TY_fbYpjfe38x3ujjAmVRbI1Q Dl_109970;
extern TY_32w2ZypAyMWuajvi2Jt79cg Dl_110047;
STRING_LITERAL(T_V45tF8B8NBcxFcjfe7lhBw_2, "ERROR: Can\'t initialize SDL: ", 29);
STRING_LITERAL(T_V45tF8B8NBcxFcjfe7lhBw_3, "ERROR: Can\'t create window: ", 28);
STRING_LITERAL(T_V45tF8B8NBcxFcjfe7lhBw_4, "ERROR: Can\'t create renderer: ", 30);
STRING_LITERAL(T_V45tF8B8NBcxFcjfe7lhBw_5, "ERROR: Can\'t set draw color: ", 29);
STRING_LITERAL(T_V45tF8B8NBcxFcjfe7lhBw_6, "SDL initialized successfully", 28);
STRING_LITERAL(T_V45tF8B8NBcxFcjfe7lhBw_7, "SDL shutdown completed", 22);
STRING_LITERAL(T_V45tF8B8NBcxFcjfe7lhBw_10, "Warning: Can\'t clear screen: ", 29);

static N_INLINE(void, nimFrame)(TFrame* s0) {
	NI LOC1;
	LOC1 = (NI)0;
	{
		if (!(frameptr_HRfVMH3jYeBJz6Q6X9b6Ptw == NIM_NIL)) goto LA4;
		LOC1 = ((NI) 0);
	}
	goto LA2;
	LA4: ;
	{
		LOC1 = ((NI) ((NI16)((*frameptr_HRfVMH3jYeBJz6Q6X9b6Ptw).calldepth + ((NI16) 1))));
	}
	LA2: ;
	(*s0).calldepth = ((NI16) (LOC1));
	(*s0).prev = frameptr_HRfVMH3jYeBJz6Q6X9b6Ptw;
	frameptr_HRfVMH3jYeBJz6Q6X9b6Ptw = s0;
	{
		if (!((*s0).calldepth == ((NI16) 2000))) goto LA9;
		stackoverflow_II46IjNZztN9bmbxUD8dt8g();
	}
	LA9: ;
}

static N_INLINE(void, popFrame)(void) {
	frameptr_HRfVMH3jYeBJz6Q6X9b6Ptw = (*frameptr_HRfVMH3jYeBJz6Q6X9b6Ptw).prev;
}

N_NIMCALL(NIM_BOOL, init_DxG9bYfX1iBwVsV69bCW9btwA)(Appobj_uj5sjR3DSuqSViTjIhavvQ* app0) {
	NIM_BOOL result0;
	nimfr("init", "main.nim")
{	result0 = (NIM_BOOL)0;
	nimln(22, "main.nim");
	{
		int LOC3;
		NCSTRING LOC6;
		NimStringDesc* LOC7;
		nimln(347, "system.nim");
		nimln(22, "main.nim");
		LOC3 = (int)0;
		LOC3 = Dl_100825(((NU32) 32));
		if (!!((LOC3 == ((NI32) 0)))) goto LA4;
		nimln(23, "main.nim");
		LOC6 = (NCSTRING)0;
		LOC6 = Dl_101933();
		LOC7 = (NimStringDesc*)0;
		LOC7 = cstrToNimstr(LOC6);
		printf("%s%s\012", ((NimStringDesc*) &T_V45tF8B8NBcxFcjfe7lhBw_2)? (((NimStringDesc*) &T_V45tF8B8NBcxFcjfe7lhBw_2))->data:"nil", LOC7? (LOC7)->data:"nil");
		fflush(stdout);
		nimln(24, "main.nim");
		result0 = NIM_FALSE;
		goto BeforeRet;
	}
	LA4: ;
	nimln(26, "main.nim");
	(*app0).window = Dl_105912("Hexe", ((int) 536805376), ((int) 536805376), ((int) 800), ((int) 600), ((NU32) 0));
	nimln(33, "main.nim");
	{
		NCSTRING LOC12;
		NimStringDesc* LOC13;
		if (!((*app0).window == NIM_NIL)) goto LA10;
		nimln(34, "main.nim");
		LOC12 = (NCSTRING)0;
		LOC12 = Dl_101933();
		LOC13 = (NimStringDesc*)0;
		LOC13 = cstrToNimstr(LOC12);
		printf("%s%s\012", ((NimStringDesc*) &T_V45tF8B8NBcxFcjfe7lhBw_3)? (((NimStringDesc*) &T_V45tF8B8NBcxFcjfe7lhBw_3))->data:"nil", LOC13? (LOC13)->data:"nil");
		fflush(stdout);
		nimln(35, "main.nim");
		result0 = NIM_FALSE;
		goto BeforeRet;
	}
	LA10: ;
	nimln(38, "main.nim");
	(*app0).renderer = Dl_109752((*app0).window, ((int) -1), ((NU32) 6));
	nimln(39, "main.nim");
	{
		NCSTRING LOC18;
		NimStringDesc* LOC19;
		if (!((*app0).renderer == NIM_NIL)) goto LA16;
		nimln(40, "main.nim");
		LOC18 = (NCSTRING)0;
		LOC18 = Dl_101933();
		LOC19 = (NimStringDesc*)0;
		LOC19 = cstrToNimstr(LOC18);
		printf("%s%s\012", ((NimStringDesc*) &T_V45tF8B8NBcxFcjfe7lhBw_4)? (((NimStringDesc*) &T_V45tF8B8NBcxFcjfe7lhBw_4))->data:"nil", LOC19? (LOC19)->data:"nil");
		fflush(stdout);
		nimln(41, "main.nim");
		result0 = NIM_FALSE;
		goto BeforeRet;
	}
	LA16: ;
	nimln(44, "main.nim");
	{
		int LOC22;
		NCSTRING LOC25;
		NimStringDesc* LOC26;
		nimln(347, "system.nim");
		nimln(44, "main.nim");
		LOC22 = (int)0;
		LOC22 = Dl_109935((*app0).renderer, ((NU8) 255), ((NU8) 255), ((NU8) 255), ((NU8) 255));
		if (!!((LOC22 == ((NI32) 0)))) goto LA23;
		nimln(45, "main.nim");
		LOC25 = (NCSTRING)0;
		LOC25 = Dl_101933();
		LOC26 = (NimStringDesc*)0;
		LOC26 = cstrToNimstr(LOC25);
		printf("%s%s\012", ((NimStringDesc*) &T_V45tF8B8NBcxFcjfe7lhBw_5)? (((NimStringDesc*) &T_V45tF8B8NBcxFcjfe7lhBw_5))->data:"nil", LOC26? (LOC26)->data:"nil");
		fflush(stdout);
		nimln(46, "main.nim");
		result0 = NIM_FALSE;
		goto BeforeRet;
	}
	LA23: ;
	nimln(48, "main.nim");
	printf("%s\012", ((NimStringDesc*) &T_V45tF8B8NBcxFcjfe7lhBw_6)? (((NimStringDesc*) &T_V45tF8B8NBcxFcjfe7lhBw_6))->data:"nil");
	fflush(stdout);
	nimln(49, "main.nim");
	result0 = NIM_TRUE;
	goto BeforeRet;
	}BeforeRet: ;
	popFrame();
	return result0;
}

N_NIMCALL(NIM_BOOL, events_ztN46N7XwzbTMOqYgln5iA)(void) {
	NIM_BOOL result0;
	Event_NT5PKfaL3rfxfEzQMihptw e0;
	nimfr("events", "main.nim")
{	result0 = (NIM_BOOL)0;
	nimln(52, "main.nim");
	result0 = NIM_FALSE;
	memset((void*)(&e0), 0, sizeof(e0));
	{
		nimln(55, "main.nim");
		while (1) {
			int LOC3;
			nimln(347, "system.nim");
			nimln(55, "main.nim");
			LOC3 = (int)0;
			LOC3 = Dl_108849((&e0));
			if (!!((LOC3 == ((NI32) 0)))) goto LA2;
			nimln(58, "main.nim");
			{
				if (!(e0.kind == ((Eventkind_EsZhlcfytIsxALaI7nZ2OQ) 256))) goto LA6;
				nimln(59, "main.nim");
				result0 = NIM_TRUE;
				goto BeforeRet;
			}
			goto LA4;
			LA6: ;
			{
				nimln(62, "main.nim");
				if (!(e0.kind == ((Eventkind_EsZhlcfytIsxALaI7nZ2OQ) 768))) goto LA9;
				nimln(64, "main.nim");
				Dl_109505(((Logcategory_53rE8px7tkZw1h4eKH19b6A) 0), "Pressed %s", reprEnum((NI)e0.key.keysym.sym, (&NTI_4JhAkMHsSpfaaoatfOE3Lw))->data);
			}
			goto LA4;
			LA9: ;
			LA4: ;
			nimln(67, "main.nim");
			{
				if (!(e0.key.keysym.sym == ((Keycode_4JhAkMHsSpfaaoatfOE3Lw) 27))) goto LA13;
				nimln(68, "main.nim");
				result0 = NIM_TRUE;
				goto BeforeRet;
			}
			LA13: ;
		} LA2: ;
	}
	}BeforeRet: ;
	popFrame();
	return result0;
}

N_NIMCALL(void, exit_LOpuFmAaC7VceR5Wr4nB5A)(Appobj_uj5sjR3DSuqSViTjIhavvQ* app0) {
	nimfr("exit", "main.nim")
	nimln(72, "main.nim");
	Dl_110053((*app0).renderer);
	nimln(73, "main.nim");
	Dl_106134((*app0).window);
	nimln(74, "main.nim");
	Dl_100837();
	nimln(75, "main.nim");
	printf("%s\012", ((NimStringDesc*) &T_V45tF8B8NBcxFcjfe7lhBw_7)? (((NimStringDesc*) &T_V45tF8B8NBcxFcjfe7lhBw_7))->data:"nil");
	fflush(stdout);
	popFrame();
}
static N_NIMCALL(void, Marker_TY_z9atM4YfOD8zxq044AkEW7w)(void* p, NI op) {
	Appobj_uj5sjR3DSuqSViTjIhavvQ* a;
	a = (Appobj_uj5sjR3DSuqSViTjIhavvQ*)p;
}
static N_NIMCALL(void, T_V45tF8B8NBcxFcjfe7lhBw_9)(void) {
	nimGCvisit((void*)app_kU8s08R79a31ZN3xV9bMxJBQ, 0);
}

static N_INLINE(Cell_1zcF9cV8XIAtbN8h5HRUB8g*, usrtocell_yB9aH5WIlwd0xkYrcdPeXrQsystem)(void* usr0) {
	Cell_1zcF9cV8XIAtbN8h5HRUB8g* result0;
	nimfr("usrToCell", "gc.nim")
	result0 = (Cell_1zcF9cV8XIAtbN8h5HRUB8g*)0;
	nimln(134, "gc.nim");
	result0 = ((Cell_1zcF9cV8XIAtbN8h5HRUB8g*) ((NI)((NU64)(((NI) (usr0))) - (NU64)(((NI)sizeof(Cell_1zcF9cV8XIAtbN8h5HRUB8g))))));
	popFrame();
	return result0;
}

static N_INLINE(void, rtladdzct_MV4BBk6J1qu70IbBxwEn4w_2system)(Cell_1zcF9cV8XIAtbN8h5HRUB8g* c0) {
	nimfr("rtlAddZCT", "gc.nim")
	nimln(220, "gc.nim");
	addzct_fCDI7oO1NNVXXURtxSzsRw((&gch_IcYaEuuWivYAS86vFMTS3Q.zct), c0);
	popFrame();
}

static N_INLINE(void, asgnRefNoCycle)(void** dest0, void* src0) {
	nimfr("asgnRefNoCycle", "gc.nim")
	nimln(280, "gc.nim");
	{
		Cell_1zcF9cV8XIAtbN8h5HRUB8g* c0;
		nimln(347, "system.nim");
		nimln(280, "gc.nim");
		if (!!((src0 == NIM_NIL))) goto LA3;
		nimln(281, "gc.nim");
		c0 = usrtocell_yB9aH5WIlwd0xkYrcdPeXrQsystem(src0);
		nimln(282, "gc.nim");
		(*c0).refcount += ((NI) 8);
	}
	LA3: ;
	nimln(283, "gc.nim");
	{
		Cell_1zcF9cV8XIAtbN8h5HRUB8g* c0;
		nimln(347, "system.nim");
		nimln(283, "gc.nim");
		if (!!(((*dest0) == NIM_NIL))) goto LA7;
		nimln(284, "gc.nim");
		c0 = usrtocell_yB9aH5WIlwd0xkYrcdPeXrQsystem((*dest0));
		nimln(285, "gc.nim");
		{
			(*c0).refcount -= ((NI) 8);
			if (!((NU64)((*c0).refcount) < (NU64)(((NI) 8)))) goto LA11;
			nimln(286, "gc.nim");
			rtladdzct_MV4BBk6J1qu70IbBxwEn4w_2system(c0);
		}
		LA11: ;
	}
	LA7: ;
	nimln(287, "gc.nim");
	(*dest0) = src0;
	popFrame();
}

static N_INLINE(void, initStackBottomWith)(void* locals0) {
	setStackBottom(locals0);
}
void PreMainInner() {
	systemInit000();
	unknown_sdlDatInit000();
	mainDatInit000();
	unknown_sdlInit000();
}

void PreMain() {
	void (*volatile inner)();
	systemDatInit000();
	inner = PreMainInner;
	initStackBottomWith((void *)&inner);
	(*inner)();
}

int cmdCount;
char** cmdLine;
char** gEnv;
N_CDECL(void, NimMainInner)(void) {
	NimMainModule();
}

N_CDECL(void, NimMain)(void) {
	void (*volatile inner)();
	PreMain();
	inner = NimMainInner;
	initStackBottomWith((void *)&inner);
	(*inner)();
}

int main(int argc, char** args, char** env) {
	cmdLine = args;
	cmdCount = argc;
	gEnv = env;
	NimMain();
	return nim_program_result;
}

NIM_EXTERNC N_NOINLINE(void, NimMainModule)(void) {
	Appobj_uj5sjR3DSuqSViTjIhavvQ* LOC1;
	nimfr("main", "main.nim")
nimRegisterGlobalMarker(T_V45tF8B8NBcxFcjfe7lhBw_9);
	nimln(83, "main.nim");
	LOC1 = (Appobj_uj5sjR3DSuqSViTjIhavvQ*)0;
	LOC1 = (Appobj_uj5sjR3DSuqSViTjIhavvQ*) newObj((&NTI_z9atM4YfOD8zxq044AkEW7w), sizeof(Appobj_uj5sjR3DSuqSViTjIhavvQ));
	(*LOC1).window = NIM_NIL;
	(*LOC1).renderer = NIM_NIL;
	asgnRefNoCycle((void**) (&app_kU8s08R79a31ZN3xV9bMxJBQ), LOC1);
	nimln(84, "main.nim");
	done_i0QG7qEPgHTmDD9behbmJmg = NIM_FALSE;
	nimln(86, "main.nim");
	{
		NIM_BOOL LOC4;
		LOC4 = (NIM_BOOL)0;
		LOC4 = init_DxG9bYfX1iBwVsV69bCW9btwA(app_kU8s08R79a31ZN3xV9bMxJBQ);
		if (!LOC4) goto LA5;
		{
			nimln(88, "main.nim");
			while (1) {
				if (!!(done_i0QG7qEPgHTmDD9behbmJmg)) goto LA8;
				nimln(90, "main.nim");
				{
					int LOC11;
					NCSTRING LOC14;
					NimStringDesc* LOC15;
					nimln(347, "system.nim");
					nimln(90, "main.nim");
					LOC11 = (int)0;
					LOC11 = Dl_109970((*app_kU8s08R79a31ZN3xV9bMxJBQ).renderer);
					if (!!((LOC11 == ((NI32) 0)))) goto LA12;
					nimln(91, "main.nim");
					LOC14 = (NCSTRING)0;
					LOC14 = Dl_101933();
					LOC15 = (NimStringDesc*)0;
					LOC15 = cstrToNimstr(LOC14);
					printf("%s%s\012", ((NimStringDesc*) &T_V45tF8B8NBcxFcjfe7lhBw_10)? (((NimStringDesc*) &T_V45tF8B8NBcxFcjfe7lhBw_10))->data:"nil", LOC15? (LOC15)->data:"nil");
					fflush(stdout);
				}
				LA12: ;
				nimln(94, "main.nim");
				Dl_110047((*app_kU8s08R79a31ZN3xV9bMxJBQ).renderer);
				nimln(96, "main.nim");
				done_i0QG7qEPgHTmDD9behbmJmg = events_ztN46N7XwzbTMOqYgln5iA();
			} LA8: ;
		}
	}
	LA5: ;
	nimln(99, "main.nim");
	exit_LOpuFmAaC7VceR5Wr4nB5A(app_kU8s08R79a31ZN3xV9bMxJBQ);
	popFrame();
}

NIM_EXTERNC N_NOINLINE(void, mainDatInit000)(void) {
static TNimNode* T_V45tF8B8NBcxFcjfe7lhBw_8[2];
static TNimNode T_V45tF8B8NBcxFcjfe7lhBw_0[3];
NTI_uj5sjR3DSuqSViTjIhavvQ.size = sizeof(Appobj_uj5sjR3DSuqSViTjIhavvQ);
NTI_uj5sjR3DSuqSViTjIhavvQ.kind = 18;
NTI_uj5sjR3DSuqSViTjIhavvQ.base = 0;
NTI_uj5sjR3DSuqSViTjIhavvQ.flags = 3;
T_V45tF8B8NBcxFcjfe7lhBw_8[0] = &T_V45tF8B8NBcxFcjfe7lhBw_0[1];
T_V45tF8B8NBcxFcjfe7lhBw_0[1].kind = 1;
T_V45tF8B8NBcxFcjfe7lhBw_0[1].offset = offsetof(Appobj_uj5sjR3DSuqSViTjIhavvQ, window);
T_V45tF8B8NBcxFcjfe7lhBw_0[1].typ = (&NTI_vr5DoT1jILTGdRlYv1OYpw);
T_V45tF8B8NBcxFcjfe7lhBw_0[1].name = "window";
T_V45tF8B8NBcxFcjfe7lhBw_8[1] = &T_V45tF8B8NBcxFcjfe7lhBw_0[2];
T_V45tF8B8NBcxFcjfe7lhBw_0[2].kind = 1;
T_V45tF8B8NBcxFcjfe7lhBw_0[2].offset = offsetof(Appobj_uj5sjR3DSuqSViTjIhavvQ, renderer);
T_V45tF8B8NBcxFcjfe7lhBw_0[2].typ = (&NTI_vr5DoT1jILTGdRlYv1OYpw);
T_V45tF8B8NBcxFcjfe7lhBw_0[2].name = "renderer";
T_V45tF8B8NBcxFcjfe7lhBw_0[0].len = 2; T_V45tF8B8NBcxFcjfe7lhBw_0[0].kind = 2; T_V45tF8B8NBcxFcjfe7lhBw_0[0].sons = &T_V45tF8B8NBcxFcjfe7lhBw_8[0];
NTI_uj5sjR3DSuqSViTjIhavvQ.node = &T_V45tF8B8NBcxFcjfe7lhBw_0[0];
NTI_z9atM4YfOD8zxq044AkEW7w.size = sizeof(Appobj_uj5sjR3DSuqSViTjIhavvQ*);
NTI_z9atM4YfOD8zxq044AkEW7w.kind = 22;
NTI_z9atM4YfOD8zxq044AkEW7w.base = (&NTI_uj5sjR3DSuqSViTjIhavvQ);
NTI_z9atM4YfOD8zxq044AkEW7w.flags = 2;
NTI_z9atM4YfOD8zxq044AkEW7w.marker = Marker_TY_z9atM4YfOD8zxq044AkEW7w;
}

