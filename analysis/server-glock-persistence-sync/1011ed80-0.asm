
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1011ed80 <.text+0x11dd80>:
1011ed80:	55                   	push   ebp
1011ed81:	8b ec                	mov    ebp,esp
1011ed83:	56                   	push   esi
1011ed84:	57                   	push   edi
1011ed85:	8b 7d 08             	mov    edi,DWORD PTR [ebp+0x8]
1011ed88:	8b f1                	mov    esi,ecx
1011ed8a:	57                   	push   edi
1011ed8b:	e8 10 fd ee ff       	call   0x1000eaa0
1011ed90:	85 c0                	test   eax,eax
1011ed92:	75 06                	jne    0x1011ed9a
1011ed94:	5f                   	pop    edi
1011ed95:	5e                   	pop    esi
1011ed96:	5d                   	pop    ebp
1011ed97:	c2 04 00             	ret    0x4
1011ed9a:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
1011ed9d:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1011eda2:	6a 1a                	push   0x1a
1011eda4:	68 88 b1 21 10       	push   0x1021b188
1011eda9:	8b 91 d0 01 00 00    	mov    edx,DWORD PTR [ecx+0x1d0]
1011edaf:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
1011edb5:	56                   	push   esi
1011edb6:	68 98 65 1e 10       	push   0x101e6598
1011edbb:	85 d2                	test   edx,edx
1011edbd:	74 10                	je     0x1011edcf
1011edbf:	03 c2                	add    eax,edx
1011edc1:	8b cf                	mov    ecx,edi
1011edc3:	50                   	push   eax
1011edc4:	e8 f7 bf ff ff       	call   0x1011adc0
1011edc9:	5f                   	pop    edi
1011edca:	5e                   	pop    esi
1011edcb:	5d                   	pop    ebp
1011edcc:	c2 04 00             	ret    0x4
1011edcf:	03 01                	add    eax,DWORD PTR [ecx]
1011edd1:	8b cf                	mov    ecx,edi
1011edd3:	50                   	push   eax
1011edd4:	e8 e7 bf ff ff       	call   0x1011adc0
1011edd9:	5f                   	pop    edi
1011edda:	5e                   	pop    esi
1011eddb:	5d                   	pop    ebp
1011eddc:	c2 04 00             	ret    0x4
