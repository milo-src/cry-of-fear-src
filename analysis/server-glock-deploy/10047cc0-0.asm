
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10047cc0 <.text+0x46cc0>:
10047cc0:	56                   	push   esi
10047cc1:	8b b1 60 01 00 00    	mov    esi,DWORD PTR [ecx+0x160]
10047cc7:	8b 96 d0 05 00 00    	mov    edx,DWORD PTR [esi+0x5d0]
10047ccd:	8b c2                	mov    eax,edx
10047ccf:	8b ca                	mov    ecx,edx
10047cd1:	83 c8 04             	or     eax,0x4
10047cd4:	83 e2 fb             	and    edx,0xfffffffb
10047cd7:	80 e1 04             	and    cl,0x4
10047cda:	0f 44 d0             	cmove  edx,eax
10047cdd:	89 96 d0 05 00 00    	mov    DWORD PTR [esi+0x5d0],edx
10047ce3:	5e                   	pop    esi
10047ce4:	c3                   	ret
