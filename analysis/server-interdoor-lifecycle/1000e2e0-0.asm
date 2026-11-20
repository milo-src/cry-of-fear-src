
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1000e2e0 <.text+0xd2e0>:
1000e2e0:	55                   	push   ebp
1000e2e1:	8b ec                	mov    ebp,esp
1000e2e3:	8b 81 80 00 00 00    	mov    eax,DWORD PTR [ecx+0x80]
1000e2e9:	85 c0                	test   eax,eax
1000e2eb:	74 16                	je     0x1000e303
1000e2ed:	f3 0f 10 45 14       	movss  xmm0,DWORD PTR [ebp+0x14]
1000e2f2:	51                   	push   ecx
1000e2f3:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
1000e2f8:	ff 75 10             	push   DWORD PTR [ebp+0x10]
1000e2fb:	ff 75 0c             	push   DWORD PTR [ebp+0xc]
1000e2fe:	ff 75 08             	push   DWORD PTR [ebp+0x8]
1000e301:	ff d0                	call   eax
1000e303:	5d                   	pop    ebp
1000e304:	c2 10 00             	ret    0x10
