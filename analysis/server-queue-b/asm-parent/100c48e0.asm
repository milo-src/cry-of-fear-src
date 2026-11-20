
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100c48e0 <.text+0xc38e0>:
100c48e0:	55                   	push   ebp
100c48e1:	8b ec                	mov    ebp,esp
100c48e3:	f3 0f 10 45 0c       	movss  xmm0,DWORD PTR [ebp+0xc]
100c48e8:	6a 01                	push   0x1
100c48ea:	83 ec 0c             	sub    esp,0xc
100c48ed:	8b c4                	mov    eax,esp
100c48ef:	ff 75 08             	push   DWORD PTR [ebp+0x8]
100c48f2:	f3 0f 11 00          	movss  DWORD PTR [eax],xmm0
100c48f6:	f3 0f 10 45 10       	movss  xmm0,DWORD PTR [ebp+0x10]
100c48fb:	f3 0f 11 40 04       	movss  DWORD PTR [eax+0x4],xmm0
100c4900:	f3 0f 10 45 14       	movss  xmm0,DWORD PTR [ebp+0x14]
100c4905:	f3 0f 11 40 08       	movss  DWORD PTR [eax+0x8],xmm0
100c490a:	e8 11 00 00 00       	call   0x100c4920
100c490f:	83 c4 14             	add    esp,0x14
100c4912:	5d                   	pop    ebp
100c4913:	c3                   	ret
