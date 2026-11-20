
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10119c00 <.text+0x118c00>:
10119c00:	55                   	push   ebp
10119c01:	8b ec                	mov    ebp,esp
10119c03:	f3 0f 10 45 14       	movss  xmm0,DWORD PTR [ebp+0x14]
10119c08:	8d 45 f0             	lea    eax,[ebp-0x10]
10119c0b:	83 ec 10             	sub    esp,0x10
10119c0e:	ff 75 1c             	push   DWORD PTR [ebp+0x1c]
10119c11:	ff 75 18             	push   DWORD PTR [ebp+0x18]
10119c14:	83 ec 08             	sub    esp,0x8
10119c17:	f3 0f 11 44 24 04    	movss  DWORD PTR [esp+0x4],xmm0
10119c1d:	f3 0f 10 45 10       	movss  xmm0,DWORD PTR [ebp+0x10]
10119c22:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
10119c27:	ff 75 0c             	push   DWORD PTR [ebp+0xc]
10119c2a:	50                   	push   eax
10119c2b:	e8 90 00 00 00       	call   0x10119cc0
10119c30:	ff 75 08             	push   DWORD PTR [ebp+0x8]
10119c33:	8d 45 f0             	lea    eax,[ebp-0x10]
10119c36:	50                   	push   eax
10119c37:	e8 04 01 00 00       	call   0x10119d40
10119c3c:	83 c4 20             	add    esp,0x20
10119c3f:	8b e5                	mov    esp,ebp
10119c41:	5d                   	pop    ebp
10119c42:	c3                   	ret
