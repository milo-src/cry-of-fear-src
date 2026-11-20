
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100b1f30 <.text+0xb0f30>:
100b1f30:	55                   	push   ebp
100b1f31:	8b ec                	mov    ebp,esp
100b1f33:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
100b1f36:	83 ec 0c             	sub    esp,0xc
100b1f39:	8b 51 04             	mov    edx,DWORD PTR [ecx+0x4]
100b1f3c:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
100b1f3f:	8b 80 0c 02 00 00    	mov    eax,DWORD PTR [eax+0x20c]
100b1f45:	3b 82 9c 01 00 00    	cmp    eax,DWORD PTR [edx+0x19c]
100b1f4b:	74 50                	je     0x100b1f9d
100b1f4d:	f7 82 a8 01 00 00 00 	test   DWORD PTR [edx+0x1a8],0x200
100b1f54:	02 00 00 
100b1f57:	74 3c                	je     0x100b1f95
100b1f59:	f3 0f 10 5a 20       	movss  xmm3,DWORD PTR [edx+0x20]
100b1f5e:	f3 0f 10 0d 84 eb 1c 	movss  xmm1,DWORD PTR ds:0x101ceb84
100b1f65:	10 
100b1f66:	f3 0f 10 52 24       	movss  xmm2,DWORD PTR [edx+0x24]
100b1f6b:	f3 0f 10 42 28       	movss  xmm0,DWORD PTR [edx+0x28]
100b1f70:	f3 0f 59 d9          	mulss  xmm3,xmm1
100b1f74:	f3 0f 59 d1          	mulss  xmm2,xmm1
100b1f78:	f3 0f 59 c1          	mulss  xmm0,xmm1
100b1f7c:	0f 14 da             	unpcklps xmm3,xmm2
100b1f7f:	66 0f d6 5a 20       	movq   QWORD PTR [edx+0x20],xmm3
100b1f84:	f3 0f 11 45 fc       	movss  DWORD PTR [ebp-0x4],xmm0
100b1f89:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
100b1f8c:	89 42 28             	mov    DWORD PTR [edx+0x28],eax
100b1f8f:	8b e5                	mov    esp,ebp
100b1f91:	5d                   	pop    ebp
100b1f92:	c2 04 00             	ret    0x4
100b1f95:	8b 01                	mov    eax,DWORD PTR [ecx]
100b1f97:	ff 90 44 02 00 00    	call   DWORD PTR [eax+0x244]
100b1f9d:	8b e5                	mov    esp,ebp
100b1f9f:	5d                   	pop    ebp
100b1fa0:	c2 04 00             	ret    0x4
