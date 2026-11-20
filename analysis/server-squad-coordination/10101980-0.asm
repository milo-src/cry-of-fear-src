
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10101980 <.text+0x100980>:
10101980:	56                   	push   esi
10101981:	8b f1                	mov    esi,ecx
10101983:	83 be 9c 03 00 00 00 	cmp    DWORD PTR [esi+0x39c],0x0
1010198a:	57                   	push   edi
1010198b:	8d be 9c 03 00 00    	lea    edi,[esi+0x39c]
10101991:	74 31                	je     0x101019c4
10101993:	53                   	push   ebx
10101994:	8d 8e 68 03 00 00    	lea    ecx,[esi+0x368]
1010199a:	e8 e1 5d f1 ff       	call   0x10017780
1010199f:	85 c0                	test   eax,eax
101019a1:	74 20                	je     0x101019c3
101019a3:	8d 8e 68 03 00 00    	lea    ecx,[esi+0x368]
101019a9:	e8 e2 5d f1 ff       	call   0x10017790
101019ae:	85 c0                	test   eax,eax
101019b0:	0f 45 f0             	cmovne esi,eax
101019b3:	8b 07                	mov    eax,DWORD PTR [edi]
101019b5:	f7 d0                	not    eax
101019b7:	21 86 90 03 00 00    	and    DWORD PTR [esi+0x390],eax
101019bd:	c7 07 00 00 00 00    	mov    DWORD PTR [edi],0x0
101019c3:	5b                   	pop    ebx
101019c4:	5f                   	pop    edi
101019c5:	5e                   	pop    esi
101019c6:	c3                   	ret
