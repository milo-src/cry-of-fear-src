
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1008dfb0 <.text+0x8cfb0>:
1008dfb0:	56                   	push   esi
1008dfb1:	8b f1                	mov    esi,ecx
1008dfb3:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1008dfb6:	8b 4e 14             	mov    ecx,DWORD PTR [esi+0x14]
1008dfb9:	f7 80 a4 01 00 00 00 	test   DWORD PTR [eax+0x1a4],0x100
1008dfc0:	01 00 00 
1008dfc3:	74 1f                	je     0x1008dfe4
1008dfc5:	85 c9                	test   ecx,ecx
1008dfc7:	74 05                	je     0x1008dfce
1008dfc9:	8b 01                	mov    eax,DWORD PTR [ecx]
1008dfcb:	ff 50 40             	call   DWORD PTR [eax+0x40]
1008dfce:	83 be b4 01 00 00 00 	cmp    DWORD PTR [esi+0x1b4],0x0
1008dfd5:	b8 08 00 00 00       	mov    eax,0x8
1008dfda:	b9 08 01 00 00       	mov    ecx,0x108
1008dfdf:	0f 45 c1             	cmovne eax,ecx
1008dfe2:	5e                   	pop    esi
1008dfe3:	c3                   	ret
1008dfe4:	85 c9                	test   ecx,ecx
1008dfe6:	74 05                	je     0x1008dfed
1008dfe8:	8b 01                	mov    eax,DWORD PTR [ecx]
1008dfea:	ff 50 40             	call   DWORD PTR [eax+0x40]
1008dfed:	33 c0                	xor    eax,eax
1008dfef:	5e                   	pop    esi
1008dff0:	c3                   	ret
