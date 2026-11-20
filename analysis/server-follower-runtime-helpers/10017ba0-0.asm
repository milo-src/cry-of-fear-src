
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10017ba0 <.text+0x16ba0>:
10017ba0:	8b 01                	mov    eax,DWORD PTR [ecx]
10017ba2:	85 c0                	test   eax,eax
10017ba4:	74 08                	je     0x10017bae
10017ba6:	8b 50 04             	mov    edx,DWORD PTR [eax+0x4]
10017ba9:	3b 51 04             	cmp    edx,DWORD PTR [ecx+0x4]
10017bac:	74 02                	je     0x10017bb0
10017bae:	33 c0                	xor    eax,eax
10017bb0:	c3                   	ret
