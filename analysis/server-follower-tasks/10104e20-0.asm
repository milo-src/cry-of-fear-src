
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10104e20 <.text+0x103e20>:
10104e20:	55                   	push   ebp
10104e21:	8b ec                	mov    ebp,esp
10104e23:	56                   	push   esi
10104e24:	8b f1                	mov    esi,ecx
10104e26:	f7 86 04 03 00 00 00 	test   DWORD PTR [esi+0x304],0x400
10104e2d:	04 00 00 
10104e30:	0f 84 84 00 00 00    	je     0x10104eba
10104e36:	8b 56 04             	mov    edx,DWORD PTR [esi+0x4]
10104e39:	83 ec 0c             	sub    esp,0xc
10104e3c:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
10104e3f:	8b cc                	mov    ecx,esp
10104e41:	f3 0f 10 50 04       	movss  xmm2,DWORD PTR [eax+0x4]
10104e46:	f3 0f 10 48 08       	movss  xmm1,DWORD PTR [eax+0x8]
10104e4b:	f3 0f 10 00          	movss  xmm0,DWORD PTR [eax]
10104e4f:	f3 0f 5c 52 0c       	subss  xmm2,DWORD PTR [edx+0xc]
10104e54:	f3 0f 5c 4a 10       	subss  xmm1,DWORD PTR [edx+0x10]
10104e59:	f3 0f 5c 42 08       	subss  xmm0,DWORD PTR [edx+0x8]
10104e5e:	f3 0f 11 51 04       	movss  DWORD PTR [ecx+0x4],xmm2
10104e63:	f3 0f 11 49 08       	movss  DWORD PTR [ecx+0x8],xmm1
10104e68:	f3 0f 11 01          	movss  DWORD PTR [ecx],xmm0
10104e6c:	8b ce                	mov    ecx,esi
10104e6e:	e8 ed d8 fb ff       	call   0x100c2760
10104e73:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
10104e76:	f3 0f 10 15 cc 13 1a 	movss  xmm2,DWORD PTR ds:0x101a13cc
10104e7d:	10 
10104e7e:	d9 5d 08             	fstp   DWORD PTR [ebp+0x8]
10104e81:	f3 0f 10 4d 08       	movss  xmm1,DWORD PTR [ebp+0x8]
10104e86:	f3 0f 5c 48 54       	subss  xmm1,DWORD PTR [eax+0x54]
10104e8b:	0f 2f 0d c4 13 1a 10 	comiss xmm1,DWORD PTR ds:0x101a13c4
10104e92:	76 04                	jbe    0x10104e98
10104e94:	f3 0f 5c ca          	subss  xmm1,xmm2
10104e98:	f3 0f 10 05 d4 13 1a 	movss  xmm0,DWORD PTR ds:0x101a13d4
10104e9f:	10 
10104ea0:	0f 2f c1             	comiss xmm0,xmm1
10104ea3:	76 04                	jbe    0x10104ea9
10104ea5:	f3 0f 58 ca          	addss  xmm1,xmm2
10104ea9:	51                   	push   ecx
10104eaa:	f3 0f 11 0c 24       	movss  DWORD PTR [esp],xmm1
10104eaf:	8b ce                	mov    ecx,esi
10104eb1:	6a 00                	push   0x0
10104eb3:	e8 b8 9c f0 ff       	call   0x1000eb70
10104eb8:	dd d8                	fstp   st(0)
10104eba:	5e                   	pop    esi
10104ebb:	5d                   	pop    ebp
10104ebc:	c2 04 00             	ret    0x4
