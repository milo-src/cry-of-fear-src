
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100beef0 <.text+0xbdef0>:
100beef0:	55                   	push   ebp
100beef1:	8b ec                	mov    ebp,esp
100beef3:	56                   	push   esi
100beef4:	8b f1                	mov    esi,ecx
100beef6:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100beef9:	83 c0 50             	add    eax,0x50
100beefc:	50                   	push   eax
100beefd:	e8 1e a4 05 00       	call   0x10119320
100bef02:	8b 15 88 31 22 10    	mov    edx,DWORD PTR ds:0x10223188
100bef08:	83 c4 04             	add    esp,0x4
100bef0b:	f3 0f 10 96 3c 03 00 	movss  xmm2,DWORD PTR [esi+0x33c]
100bef12:	00 
100bef13:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
100bef16:	0f 28 ca             	movaps xmm1,xmm2
100bef19:	f3 0f 10 9e 38 03 00 	movss  xmm3,DWORD PTR [esi+0x338]
100bef20:	00 
100bef21:	f3 0f 59 4a 28       	mulss  xmm1,DWORD PTR [edx+0x28]
100bef26:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
100bef29:	f3 0f 10 42 40       	movss  xmm0,DWORD PTR [edx+0x40]
100bef2e:	f3 0f 10 a6 40 03 00 	movss  xmm4,DWORD PTR [esi+0x340]
100bef35:	00 
100bef36:	f3 0f 58 49 08       	addss  xmm1,DWORD PTR [ecx+0x8]
100bef3b:	f3 0f 59 c3          	mulss  xmm0,xmm3
100bef3f:	5e                   	pop    esi
100bef40:	f3 0f 58 c8          	addss  xmm1,xmm0
100bef44:	f3 0f 10 42 34       	movss  xmm0,DWORD PTR [edx+0x34]
100bef49:	f3 0f 59 c4          	mulss  xmm0,xmm4
100bef4d:	f3 0f 58 c8          	addss  xmm1,xmm0
100bef51:	f3 0f 10 42 44       	movss  xmm0,DWORD PTR [edx+0x44]
100bef56:	f3 0f 59 c3          	mulss  xmm0,xmm3
100bef5a:	f3 0f 11 08          	movss  DWORD PTR [eax],xmm1
100bef5e:	f3 0f 10 4a 2c       	movss  xmm1,DWORD PTR [edx+0x2c]
100bef63:	f3 0f 59 ca          	mulss  xmm1,xmm2
100bef67:	f3 0f 58 49 0c       	addss  xmm1,DWORD PTR [ecx+0xc]
100bef6c:	f3 0f 58 c8          	addss  xmm1,xmm0
100bef70:	f3 0f 10 42 38       	movss  xmm0,DWORD PTR [edx+0x38]
100bef75:	f3 0f 59 c4          	mulss  xmm0,xmm4
100bef79:	f3 0f 58 c8          	addss  xmm1,xmm0
100bef7d:	f3 0f 10 42 48       	movss  xmm0,DWORD PTR [edx+0x48]
100bef82:	f3 0f 59 c3          	mulss  xmm0,xmm3
100bef86:	f3 0f 11 48 04       	movss  DWORD PTR [eax+0x4],xmm1
100bef8b:	f3 0f 10 4a 30       	movss  xmm1,DWORD PTR [edx+0x30]
100bef90:	f3 0f 59 ca          	mulss  xmm1,xmm2
100bef94:	f3 0f 58 49 10       	addss  xmm1,DWORD PTR [ecx+0x10]
100bef99:	f3 0f 58 c8          	addss  xmm1,xmm0
100bef9d:	f3 0f 10 42 3c       	movss  xmm0,DWORD PTR [edx+0x3c]
100befa2:	f3 0f 59 c4          	mulss  xmm0,xmm4
100befa6:	f3 0f 58 c8          	addss  xmm1,xmm0
100befaa:	f3 0f 11 48 08       	movss  DWORD PTR [eax+0x8],xmm1
100befaf:	5d                   	pop    ebp
100befb0:	c2 04 00             	ret    0x4
