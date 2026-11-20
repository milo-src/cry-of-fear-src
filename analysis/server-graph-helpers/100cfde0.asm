
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100cfde0 <.text+0xcede0>:
100cfde0:	55                   	push   ebp
100cfde1:	8b ec                	mov    ebp,esp
100cfde3:	8b 45 10             	mov    eax,DWORD PTR [ebp+0x10]
100cfde6:	8b 55 14             	mov    edx,DWORD PTR [ebp+0x14]
100cfde9:	8d 0c 00             	lea    ecx,[eax+eax*1]
100cfdec:	2b ca                	sub    ecx,edx
100cfdee:	3b d0                	cmp    edx,eax
100cfdf0:	7e 0b                	jle    0x100cfdfd
100cfdf2:	33 c0                	xor    eax,eax
100cfdf4:	85 c9                	test   ecx,ecx
100cfdf6:	0f 48 c8             	cmovs  ecx,eax
100cfdf9:	8b c2                	mov    eax,edx
100cfdfb:	eb 10                	jmp    0x100cfe0d
100cfdfd:	56                   	push   esi
100cfdfe:	be ff 00 00 00       	mov    esi,0xff
100cfe03:	8b c1                	mov    eax,ecx
100cfe05:	3b ce                	cmp    ecx,esi
100cfe07:	8b ca                	mov    ecx,edx
100cfe09:	0f 4f c6             	cmovg  eax,esi
100cfe0c:	5e                   	pop    esi
100cfe0d:	8b 55 0c             	mov    edx,DWORD PTR [ebp+0xc]
100cfe10:	3b 02                	cmp    eax,DWORD PTR [edx]
100cfe12:	7d 02                	jge    0x100cfe16
100cfe14:	89 02                	mov    DWORD PTR [edx],eax
100cfe16:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
100cfe19:	39 08                	cmp    DWORD PTR [eax],ecx
100cfe1b:	7d 02                	jge    0x100cfe1f
100cfe1d:	89 08                	mov    DWORD PTR [eax],ecx
100cfe1f:	5d                   	pop    ebp
100cfe20:	c3                   	ret
