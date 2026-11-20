
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1000eb00 <.text+0xdb00>:
1000eb00:	55                   	push   ebp
1000eb01:	8b ec                	mov    ebp,esp
1000eb03:	56                   	push   esi
1000eb04:	8b f1                	mov    esi,ecx
1000eb06:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1000eb09:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
1000eb0f:	ff 15 70 30 22 10    	call   DWORD PTR ds:0x10223070
1000eb15:	f3 0f 10 45 0c       	movss  xmm0,DWORD PTR [ebp+0xc]
1000eb1a:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
1000eb1f:	ff 75 08             	push   DWORD PTR [ebp+0x8]
1000eb22:	ff 76 04             	push   DWORD PTR [esi+0x4]
1000eb25:	50                   	push   eax
1000eb26:	e8 45 0b 00 00       	call   0x1000f670
1000eb2b:	83 c4 10             	add    esp,0x10
1000eb2e:	5e                   	pop    esi
1000eb2f:	5d                   	pop    ebp
1000eb30:	c2 08 00             	ret    0x8
