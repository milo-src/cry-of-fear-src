
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1000e1f0 <.text+0xd1f0>:
1000e1f0:	55                   	push   ebp
1000e1f1:	8b ec                	mov    ebp,esp
1000e1f3:	8b 01                	mov    eax,DWORD PTR [ecx]
1000e1f5:	f3 0f 10 45 08       	movss  xmm0,DWORD PTR [ebp+0x8]
1000e1fa:	6a 00                	push   0x0
1000e1fc:	51                   	push   ecx
1000e1fd:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
1000e202:	ff 50 04             	call   DWORD PTR [eax+0x4]
1000e205:	5d                   	pop    ebp
1000e206:	c2 04 00             	ret    0x4
