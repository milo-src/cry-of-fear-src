
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10118f30 <.text+0x117f30>:
10118f30:	55                   	push   ebp
10118f31:	8b ec                	mov    ebp,esp
10118f33:	83 e4 f8             	and    esp,0xfffffff8
10118f36:	83 ec 24             	sub    esp,0x24
10118f39:	8b 45 0c             	mov    eax,DWORD PTR [ebp+0xc]
10118f3c:	56                   	push   esi
10118f3d:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
10118f40:	f3 0f 10 40 04       	movss  xmm0,DWORD PTR [eax+0x4]
10118f45:	f3 0f 10 10          	movss  xmm2,DWORD PTR [eax]
10118f49:	f3 0f 5c 46 0c       	subss  xmm0,DWORD PTR [esi+0xc]
10118f4e:	f3 0f 5c 56 08       	subss  xmm2,DWORD PTR [esi+0x8]
10118f53:	0f 28 c8             	movaps xmm1,xmm0
10118f56:	f3 0f 11 44 24 04    	movss  DWORD PTR [esp+0x4],xmm0
10118f5c:	f3 0f 59 c8          	mulss  xmm1,xmm0
10118f60:	0f 28 c2             	movaps xmm0,xmm2
10118f63:	f3 0f 59 c2          	mulss  xmm0,xmm2
10118f67:	f3 0f 11 54 24 0c    	movss  DWORD PTR [esp+0xc],xmm2
10118f6d:	f3 0f 58 c8          	addss  xmm1,xmm0
10118f71:	0f 57 c0             	xorps  xmm0,xmm0
10118f74:	f3 0f 58 c8          	addss  xmm1,xmm0
10118f78:	0f 5a c1             	cvtps2pd xmm0,xmm1
10118f7b:	0f 57 c9             	xorps  xmm1,xmm1
10118f7e:	66 0f 2e c8          	ucomisd xmm1,xmm0
10118f82:	77 06                	ja     0x10118f8a
10118f84:	f2 0f 51 c0          	sqrtsd xmm0,xmm0
10118f88:	eb 05                	jmp    0x10118f8f
10118f8a:	e8 01 2f 05 00       	call   0x1016be90
10118f8f:	0f 57 d2             	xorps  xmm2,xmm2
10118f92:	0f 57 c9             	xorps  xmm1,xmm1
10118f95:	f2 0f 5a d0          	cvtsd2ss xmm2,xmm0
10118f99:	f3 0f 10 05 90 13 1a 	movss  xmm0,DWORD PTR ds:0x101a1390
10118fa0:	10 
10118fa1:	0f 2e d1             	ucomiss xmm2,xmm1
10118fa4:	9f                   	lahf
10118fa5:	f6 c4 44             	test   ah,0x44
10118fa8:	7a 0e                	jp     0x10118fb8
10118faa:	f3 0f 11 4c 24 08    	movss  DWORD PTR [esp+0x8],xmm1
10118fb0:	f3 0f 11 4c 24 04    	movss  DWORD PTR [esp+0x4],xmm1
10118fb6:	eb 26                	jmp    0x10118fde
10118fb8:	f3 0f 5e c2          	divss  xmm0,xmm2
10118fbc:	0f 28 d0             	movaps xmm2,xmm0
10118fbf:	f3 0f 59 54 24 0c    	mulss  xmm2,DWORD PTR [esp+0xc]
10118fc5:	f3 0f 11 54 24 08    	movss  DWORD PTR [esp+0x8],xmm2
10118fcb:	0f 28 d0             	movaps xmm2,xmm0
10118fce:	f3 0f 59 54 24 04    	mulss  xmm2,DWORD PTR [esp+0x4]
10118fd4:	f3 0f 59 c1          	mulss  xmm0,xmm1
10118fd8:	f3 0f 11 54 24 04    	movss  DWORD PTR [esp+0x4],xmm2
10118fde:	8b 46 7c             	mov    eax,DWORD PTR [esi+0x7c]
10118fe1:	6a 00                	push   0x0
10118fe3:	89 44 24 1c          	mov    DWORD PTR [esp+0x1c],eax
10118fe7:	8d 44 24 20          	lea    eax,[esp+0x20]
10118feb:	6a 00                	push   0x0
10118fed:	50                   	push   eax
10118fee:	f3 0f 11 44 24 18    	movss  DWORD PTR [esp+0x18],xmm0
10118ff4:	8d 44 24 1c          	lea    eax,[esp+0x1c]
10118ff8:	f3 0f 7e 46 74       	movq   xmm0,QWORD PTR [esi+0x74]
10118ffd:	66 0f d6 44 24 1c    	movq   QWORD PTR [esp+0x1c],xmm0
10119003:	50                   	push   eax
10119004:	c7 44 24 20 00 00 00 	mov    DWORD PTR [esp+0x20],0x0
1011900b:	00 
1011900c:	ff 15 98 2f 22 10    	call   DWORD PTR ds:0x10222f98
10119012:	f3 0f 10 44 24 2c    	movss  xmm0,DWORD PTR [esp+0x2c]
10119018:	83 c4 10             	add    esp,0x10
1011901b:	f3 0f 59 44 24 08    	mulss  xmm0,DWORD PTR [esp+0x8]
10119021:	33 c0                	xor    eax,eax
10119023:	f3 0f 10 4c 24 20    	movss  xmm1,DWORD PTR [esp+0x20]
10119029:	f3 0f 59 4c 24 04    	mulss  xmm1,DWORD PTR [esp+0x4]
1011902f:	5e                   	pop    esi
10119030:	f3 0f 58 c8          	addss  xmm1,xmm0
10119034:	f3 0f 10 44 24 20    	movss  xmm0,DWORD PTR [esp+0x20]
1011903a:	f3 0f 59 44 24 08    	mulss  xmm0,DWORD PTR [esp+0x8]
10119040:	f3 0f 58 c8          	addss  xmm1,xmm0
10119044:	0f 5a c1             	cvtps2pd xmm0,xmm1
10119047:	66 0f 2f 05 40 5a 1e 	comisd xmm0,QWORD PTR ds:0x101e5a40
1011904e:	10 
1011904f:	0f 97 c0             	seta   al
10119052:	8b e5                	mov    esp,ebp
10119054:	5d                   	pop    ebp
10119055:	c3                   	ret
