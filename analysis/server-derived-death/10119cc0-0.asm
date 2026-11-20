
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10119cc0 <.text+0x118cc0>:
10119cc0:	55                   	push   ebp
10119cc1:	8b ec                	mov    ebp,esp
10119cc3:	f3 0f 10 45 10       	movss  xmm0,DWORD PTR [ebp+0x10]
10119cc8:	83 ec 08             	sub    esp,0x8
10119ccb:	c7 44 24 04 00 00 80 	mov    DWORD PTR [esp+0x4],0x45800000
10119cd2:	45 
10119cd3:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
10119cd8:	e8 f3 c9 ff ff       	call   0x101166d0
10119cdd:	8b 55 08             	mov    edx,DWORD PTR [ebp+0x8]
10119ce0:	0f b7 c0             	movzx  eax,ax
10119ce3:	c7 44 24 04 00 00 80 	mov    DWORD PTR [esp+0x4],0x45800000
10119cea:	45 
10119ceb:	66 0f 6e c0          	movd   xmm0,eax
10119cef:	0f 5b c0             	cvtdq2ps xmm0,xmm0
10119cf2:	f3 0f 11 02          	movss  DWORD PTR [edx],xmm0
10119cf6:	f3 0f 10 45 14       	movss  xmm0,DWORD PTR [ebp+0x14]
10119cfb:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
10119d00:	e8 cb c9 ff ff       	call   0x101166d0
10119d05:	8b 4d 0c             	mov    ecx,DWORD PTR [ebp+0xc]
10119d08:	83 c4 08             	add    esp,0x8
10119d0b:	0f b7 c0             	movzx  eax,ax
10119d0e:	66 0f 6e c0          	movd   xmm0,eax
10119d12:	0f 5b c0             	cvtdq2ps xmm0,xmm0
10119d15:	f3 0f 11 42 04       	movss  DWORD PTR [edx+0x4],xmm0
10119d1a:	f3 0f 2c 01          	cvttss2si eax,DWORD PTR [ecx]
10119d1e:	88 42 0c             	mov    BYTE PTR [edx+0xc],al
10119d21:	f3 0f 2c 41 04       	cvttss2si eax,DWORD PTR [ecx+0x4]
10119d26:	88 42 0d             	mov    BYTE PTR [edx+0xd],al
10119d29:	f3 0f 2c 41 08       	cvttss2si eax,DWORD PTR [ecx+0x8]
10119d2e:	88 42 0e             	mov    BYTE PTR [edx+0xe],al
10119d31:	8a 45 18             	mov    al,BYTE PTR [ebp+0x18]
10119d34:	88 42 0f             	mov    BYTE PTR [edx+0xf],al
10119d37:	8b 45 1c             	mov    eax,DWORD PTR [ebp+0x1c]
10119d3a:	89 42 08             	mov    DWORD PTR [edx+0x8],eax
10119d3d:	5d                   	pop    ebp
10119d3e:	c3                   	ret
