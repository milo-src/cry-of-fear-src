
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100c4550 <.text+0xc3550>:
100c4550:	55                   	push   ebp
100c4551:	8b ec                	mov    ebp,esp
100c4553:	f3 0f 10 45 0c       	movss  xmm0,DWORD PTR [ebp+0xc]
100c4558:	6a 01                	push   0x1
100c455a:	83 ec 0c             	sub    esp,0xc
100c455d:	8b c4                	mov    eax,esp
100c455f:	ff 75 08             	push   DWORD PTR [ebp+0x8]
100c4562:	f3 0f 11 00          	movss  DWORD PTR [eax],xmm0
100c4566:	f3 0f 10 45 10       	movss  xmm0,DWORD PTR [ebp+0x10]
100c456b:	f3 0f 11 40 04       	movss  DWORD PTR [eax+0x4],xmm0
100c4570:	f3 0f 10 45 14       	movss  xmm0,DWORD PTR [ebp+0x14]
100c4575:	f3 0f 11 40 08       	movss  DWORD PTR [eax+0x8],xmm0
100c457a:	e8 11 00 00 00       	call   0x100c4590
100c457f:	83 c4 14             	add    esp,0x14
100c4582:	5d                   	pop    ebp
100c4583:	c3                   	ret
