
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1009ac20 <.text+0x99c20>:
1009ac20:	55                   	push   ebp
1009ac21:	8b ec                	mov    ebp,esp
1009ac23:	56                   	push   esi
1009ac24:	57                   	push   edi
1009ac25:	8b 7d 08             	mov    edi,DWORD PTR [ebp+0x8]
1009ac28:	8b f1                	mov    esi,ecx
1009ac2a:	57                   	push   edi
1009ac2b:	e8 d0 d3 f7 ff       	call   0x10018000
1009ac30:	85 c0                	test   eax,eax
1009ac32:	75 06                	jne    0x1009ac3a
1009ac34:	5f                   	pop    edi
1009ac35:	5e                   	pop    esi
1009ac36:	5d                   	pop    ebp
1009ac37:	c2 04 00             	ret    0x4
1009ac3a:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
1009ac3d:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1009ac42:	6a 02                	push   0x2
1009ac44:	68 f8 3f 21 10       	push   0x10213ff8
1009ac49:	8b 91 d0 01 00 00    	mov    edx,DWORD PTR [ecx+0x1d0]
1009ac4f:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
1009ac55:	56                   	push   esi
1009ac56:	68 74 91 1c 10       	push   0x101c9174
1009ac5b:	85 d2                	test   edx,edx
1009ac5d:	74 10                	je     0x1009ac6f
1009ac5f:	03 c2                	add    eax,edx
1009ac61:	8b cf                	mov    ecx,edi
1009ac63:	50                   	push   eax
1009ac64:	e8 57 01 08 00       	call   0x1011adc0
1009ac69:	5f                   	pop    edi
1009ac6a:	5e                   	pop    esi
1009ac6b:	5d                   	pop    ebp
1009ac6c:	c2 04 00             	ret    0x4
1009ac6f:	03 01                	add    eax,DWORD PTR [ecx]
1009ac71:	8b cf                	mov    ecx,edi
1009ac73:	50                   	push   eax
1009ac74:	e8 47 01 08 00       	call   0x1011adc0
1009ac79:	5f                   	pop    edi
1009ac7a:	5e                   	pop    esi
1009ac7b:	5d                   	pop    ebp
1009ac7c:	c2 04 00             	ret    0x4
