
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100cff60 <.text+0xcef60>:
100cff60:	55                   	push   ebp
100cff61:	8b ec                	mov    ebp,esp
100cff63:	83 ec 08             	sub    esp,0x8
100cff66:	56                   	push   esi
100cff67:	8b f1                	mov    esi,ecx
100cff69:	83 be f8 01 00 00 00 	cmp    DWORD PTR [esi+0x1f8],0x0
100cff70:	75 20                	jne    0x100cff92
100cff72:	e8 99 1c 00 00       	call   0x100d1c10
100cff77:	8b 86 f8 01 00 00    	mov    eax,DWORD PTR [esi+0x1f8]
100cff7d:	51                   	push   ecx
100cff7e:	8b ce                	mov    ecx,esi
100cff80:	f3 0f 10 80 a0 00 00 	movss  xmm0,DWORD PTR [eax+0xa0]
100cff87:	00 
100cff88:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
100cff8d:	e8 9e 08 00 00       	call   0x100d0830
100cff92:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100cff97:	f3 0f 10 8e 04 02 00 	movss  xmm1,DWORD PTR [esi+0x204]
100cff9e:	00 
100cff9f:	f3 0f 10 86 fc 01 00 	movss  xmm0,DWORD PTR [esi+0x1fc]
100cffa6:	00 
100cffa7:	f3 0f 59 c1          	mulss  xmm0,xmm1
100cffab:	f3 0f 10 10          	movss  xmm2,DWORD PTR [eax]
100cffaf:	f3 0f 5c 96 00 02 00 	subss  xmm2,DWORD PTR [esi+0x200]
100cffb6:	00 
100cffb7:	f3 0f 11 4d f8       	movss  DWORD PTR [ebp-0x8],xmm1
100cffbc:	5e                   	pop    esi
100cffbd:	f3 0f 5e d0          	divss  xmm2,xmm0
100cffc1:	0f 2f 15 90 13 1a 10 	comiss xmm2,DWORD PTR ds:0x101a1390
100cffc8:	f3 0f 11 55 fc       	movss  DWORD PTR [ebp-0x4],xmm2
100cffcd:	76 06                	jbe    0x100cffd5
100cffcf:	d9 ee                	fldz
100cffd1:	8b e5                	mov    esp,ebp
100cffd3:	5d                   	pop    ebp
100cffd4:	c3                   	ret
100cffd5:	d9 e8                	fld1
100cffd7:	d8 65 fc             	fsub   DWORD PTR [ebp-0x4]
100cffda:	d8 4d f8             	fmul   DWORD PTR [ebp-0x8]
100cffdd:	8b e5                	mov    esp,ebp
100cffdf:	5d                   	pop    ebp
100cffe0:	c3                   	ret
