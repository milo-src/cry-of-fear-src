
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10009dd0 <.text+0x8dd0>:
10009dd0:	55                   	push   ebp
10009dd1:	8b ec                	mov    ebp,esp
10009dd3:	a1 50 0c 22 10       	mov    eax,ds:0x10220c50
10009dd8:	83 78 08 00          	cmp    DWORD PTR [eax+0x8],0x0
10009ddc:	75 61                	jne    0x10009e3f
10009dde:	f3 0f 10 15 ec 1e 1a 	movss  xmm2,DWORD PTR ds:0x101a1eec
10009de5:	10 
10009de6:	f3 0f 10 80 34 02 00 	movss  xmm0,DWORD PTR [eax+0x234]
10009ded:	00 
10009dee:	f3 0f 10 4d 08       	movss  xmm1,DWORD PTR [ebp+0x8]
10009df3:	f3 0f 59 ca          	mulss  xmm1,xmm2
10009df7:	f3 0f 5c c1          	subss  xmm0,xmm1
10009dfb:	f3 0f 11 80 34 02 00 	movss  DWORD PTR [eax+0x234],xmm0
10009e02:	00 
10009e03:	a1 50 0c 22 10       	mov    eax,ds:0x10220c50
10009e08:	f3 0f 10 45 0c       	movss  xmm0,DWORD PTR [ebp+0xc]
10009e0d:	f3 0f 59 c2          	mulss  xmm0,xmm2
10009e11:	f3 0f 58 80 38 02 00 	addss  xmm0,DWORD PTR [eax+0x238]
10009e18:	00 
10009e19:	f3 0f 11 80 38 02 00 	movss  DWORD PTR [eax+0x238],xmm0
10009e20:	00 
10009e21:	f3 0f 10 45 10       	movss  xmm0,DWORD PTR [ebp+0x10]
10009e26:	a1 50 0c 22 10       	mov    eax,ds:0x10220c50
10009e2b:	f3 0f 59 c2          	mulss  xmm0,xmm2
10009e2f:	f3 0f 58 80 3c 02 00 	addss  xmm0,DWORD PTR [eax+0x23c]
10009e36:	00 
10009e37:	f3 0f 11 80 3c 02 00 	movss  DWORD PTR [eax+0x23c],xmm0
10009e3e:	00 
10009e3f:	5d                   	pop    ebp
10009e40:	c3                   	ret
