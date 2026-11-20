
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10017e70 <.text+0x16e70>:
10017e70:	55                   	push   ebp
10017e71:	8b ec                	mov    ebp,esp
10017e73:	83 e4 f8             	and    esp,0xfffffff8
10017e76:	51                   	push   ecx
10017e77:	56                   	push   esi
10017e78:	8b f1                	mov    esi,ecx
10017e7a:	f3 0f 10 0e          	movss  xmm1,DWORD PTR [esi]
10017e7e:	f3 0f 10 46 04       	movss  xmm0,DWORD PTR [esi+0x4]
10017e83:	f3 0f 59 c0          	mulss  xmm0,xmm0
10017e87:	f3 0f 59 c9          	mulss  xmm1,xmm1
10017e8b:	f3 0f 58 c8          	addss  xmm1,xmm0
10017e8f:	f3 0f 10 46 08       	movss  xmm0,DWORD PTR [esi+0x8]
10017e94:	f3 0f 59 c0          	mulss  xmm0,xmm0
10017e98:	f3 0f 58 c8          	addss  xmm1,xmm0
10017e9c:	0f 5a c1             	cvtps2pd xmm0,xmm1
10017e9f:	0f 57 c9             	xorps  xmm1,xmm1
10017ea2:	66 0f 2e c8          	ucomisd xmm1,xmm0
10017ea6:	77 06                	ja     0x10017eae
10017ea8:	f2 0f 51 c0          	sqrtsd xmm0,xmm0
10017eac:	eb 05                	jmp    0x10017eb3
10017eae:	e8 dd 3f 15 00       	call   0x1016be90
10017eb3:	8b 4d 08             	mov    ecx,DWORD PTR [ebp+0x8]
10017eb6:	0f 57 c9             	xorps  xmm1,xmm1
10017eb9:	f2 0f 5a c8          	cvtsd2ss xmm1,xmm0
10017ebd:	0f 57 c0             	xorps  xmm0,xmm0
10017ec0:	0f 2e c8             	ucomiss xmm1,xmm0
10017ec3:	9f                   	lahf
10017ec4:	f6 c4 44             	test   ah,0x44
10017ec7:	8b c1                	mov    eax,ecx
10017ec9:	7a 1b                	jp     0x10017ee6
10017ecb:	c7 01 00 00 00 00    	mov    DWORD PTR [ecx],0x0
10017ed1:	c7 41 04 00 00 00 00 	mov    DWORD PTR [ecx+0x4],0x0
10017ed8:	c7 41 08 00 00 80 3f 	mov    DWORD PTR [ecx+0x8],0x3f800000
10017edf:	5e                   	pop    esi
10017ee0:	8b e5                	mov    esp,ebp
10017ee2:	5d                   	pop    ebp
10017ee3:	c2 04 00             	ret    0x4
10017ee6:	f3 0f 10 05 90 13 1a 	movss  xmm0,DWORD PTR ds:0x101a1390
10017eed:	10 
10017eee:	f3 0f 5e c1          	divss  xmm0,xmm1
10017ef2:	f3 0f 10 0e          	movss  xmm1,DWORD PTR [esi]
10017ef6:	f3 0f 59 c8          	mulss  xmm1,xmm0
10017efa:	f3 0f 11 09          	movss  DWORD PTR [ecx],xmm1
10017efe:	f3 0f 10 4e 04       	movss  xmm1,DWORD PTR [esi+0x4]
10017f03:	f3 0f 59 c8          	mulss  xmm1,xmm0
10017f07:	f3 0f 11 49 04       	movss  DWORD PTR [ecx+0x4],xmm1
10017f0c:	f3 0f 10 4e 08       	movss  xmm1,DWORD PTR [esi+0x8]
10017f11:	f3 0f 59 c8          	mulss  xmm1,xmm0
10017f15:	5e                   	pop    esi
10017f16:	f3 0f 11 49 08       	movss  DWORD PTR [ecx+0x8],xmm1
10017f1b:	8b e5                	mov    esp,ebp
10017f1d:	5d                   	pop    ebp
10017f1e:	c2 04 00             	ret    0x4
