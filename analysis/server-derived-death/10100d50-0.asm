
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10100d50 <.text+0xffd50>:
10100d50:	55                   	push   ebp
10100d51:	8b ec                	mov    ebp,esp
10100d53:	56                   	push   esi
10100d54:	57                   	push   edi
10100d55:	8b f1                	mov    esi,ecx
10100d57:	e8 24 0c 00 00       	call   0x10101980
10100d5c:	8d 8e 68 03 00 00    	lea    ecx,[esi+0x368]
10100d62:	e8 19 6a f1 ff       	call   0x10017780
10100d67:	85 c0                	test   eax,eax
10100d69:	74 18                	je     0x10100d83
10100d6b:	8d 8e 68 03 00 00    	lea    ecx,[esi+0x368]
10100d71:	e8 1a 6a f1 ff       	call   0x10017790
10100d76:	85 c0                	test   eax,eax
10100d78:	8b ce                	mov    ecx,esi
10100d7a:	56                   	push   esi
10100d7b:	0f 45 c8             	cmovne ecx,eax
10100d7e:	e8 dd 0a 00 00       	call   0x10101860
10100d83:	ff 75 0c             	push   DWORD PTR [ebp+0xc]
10100d86:	8b ce                	mov    ecx,esi
10100d88:	ff 75 08             	push   DWORD PTR [ebp+0x8]
10100d8b:	e8 a0 95 f8 ff       	call   0x1008a330
10100d90:	5f                   	pop    edi
10100d91:	5e                   	pop    esi
10100d92:	5d                   	pop    ebp
10100d93:	c2 08 00             	ret    0x8
