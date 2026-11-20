
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100bf880 <.text+0xbe880>:
100bf880:	56                   	push   esi
100bf881:	57                   	push   edi
100bf882:	8b f9                	mov    edi,ecx
100bf884:	e8 d7 e6 ff ff       	call   0x100bdf60
100bf889:	8b f0                	mov    esi,eax
100bf88b:	f7 de                	neg    esi
100bf88d:	1b f6                	sbb    esi,esi
100bf88f:	83 e6 c0             	and    esi,0xffffffc0
100bf892:	83 c6 40             	add    esi,0x40
100bf895:	83 bf 24 02 00 00 06 	cmp    DWORD PTR [edi+0x224],0x6
100bf89c:	75 17                	jne    0x100bf8b5
100bf89e:	8b 8f 4c 03 00 00    	mov    ecx,DWORD PTR [edi+0x34c]
100bf8a4:	85 c9                	test   ecx,ecx
100bf8a6:	74 0d                	je     0x100bf8b5
100bf8a8:	8b 01                	mov    eax,DWORD PTR [ecx]
100bf8aa:	ff 90 dc 01 00 00    	call   DWORD PTR [eax+0x1dc]
100bf8b0:	5f                   	pop    edi
100bf8b1:	0b c6                	or     eax,esi
100bf8b3:	5e                   	pop    esi
100bf8b4:	c3                   	ret
100bf8b5:	5f                   	pop    edi
100bf8b6:	8b c6                	mov    eax,esi
100bf8b8:	5e                   	pop    esi
100bf8b9:	c3                   	ret
