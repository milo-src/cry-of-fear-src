
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1000aaf0 <.text+0x9af0>:
1000aaf0:	55                   	push   ebp
1000aaf1:	8b ec                	mov    ebp,esp
1000aaf3:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1000aaf8:	8b 55 0c             	mov    edx,DWORD PTR [ebp+0xc]
1000aafb:	8b 88 98 00 00 00    	mov    ecx,DWORD PTR [eax+0x98]
1000ab01:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
1000ab04:	03 08                	add    ecx,DWORD PTR [eax]
1000ab06:	8a 01                	mov    al,BYTE PTR [ecx]
1000ab08:	3a 02                	cmp    al,BYTE PTR [edx]
1000ab0a:	75 21                	jne    0x1000ab2d
1000ab0c:	84 c0                	test   al,al
1000ab0e:	74 12                	je     0x1000ab22
1000ab10:	8a 41 01             	mov    al,BYTE PTR [ecx+0x1]
1000ab13:	3a 42 01             	cmp    al,BYTE PTR [edx+0x1]
1000ab16:	75 15                	jne    0x1000ab2d
1000ab18:	83 c1 02             	add    ecx,0x2
1000ab1b:	83 c2 02             	add    edx,0x2
1000ab1e:	84 c0                	test   al,al
1000ab20:	75 e4                	jne    0x1000ab06
1000ab22:	33 c9                	xor    ecx,ecx
1000ab24:	33 c0                	xor    eax,eax
1000ab26:	85 c9                	test   ecx,ecx
1000ab28:	0f 94 c0             	sete   al
1000ab2b:	5d                   	pop    ebp
1000ab2c:	c3                   	ret
1000ab2d:	1b c9                	sbb    ecx,ecx
1000ab2f:	33 c0                	xor    eax,eax
1000ab31:	83 c9 01             	or     ecx,0x1
1000ab34:	85 c9                	test   ecx,ecx
1000ab36:	0f 94 c0             	sete   al
1000ab39:	5d                   	pop    ebp
1000ab3a:	c3                   	ret
