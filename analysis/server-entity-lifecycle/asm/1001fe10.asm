
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1001fe10 <.text+0x1ee10>:
1001fe10:	55                   	push   ebp
1001fe11:	8b ec                	mov    ebp,esp
1001fe13:	56                   	push   esi
1001fe14:	57                   	push   edi
1001fe15:	8b 7d 08             	mov    edi,DWORD PTR [ebp+0x8]
1001fe18:	8b f1                	mov    esi,ecx
1001fe1a:	57                   	push   edi
1001fe1b:	e8 80 ec fe ff       	call   0x1000eaa0
1001fe20:	85 c0                	test   eax,eax
1001fe22:	75 06                	jne    0x1001fe2a
1001fe24:	5f                   	pop    edi
1001fe25:	5e                   	pop    esi
1001fe26:	5d                   	pop    ebp
1001fe27:	c2 04 00             	ret    0x4
1001fe2a:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
1001fe2d:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1001fe32:	6a 01                	push   0x1
1001fe34:	68 4c 1f 21 10       	push   0x10211f4c
1001fe39:	8b 91 d0 01 00 00    	mov    edx,DWORD PTR [ecx+0x1d0]
1001fe3f:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
1001fe45:	56                   	push   esi
1001fe46:	68 68 98 1a 10       	push   0x101a9868
1001fe4b:	85 d2                	test   edx,edx
1001fe4d:	74 10                	je     0x1001fe5f
1001fe4f:	03 c2                	add    eax,edx
1001fe51:	8b cf                	mov    ecx,edi
1001fe53:	50                   	push   eax
1001fe54:	e8 67 af 0f 00       	call   0x1011adc0
1001fe59:	5f                   	pop    edi
1001fe5a:	5e                   	pop    esi
1001fe5b:	5d                   	pop    ebp
1001fe5c:	c2 04 00             	ret    0x4
1001fe5f:	03 01                	add    eax,DWORD PTR [ecx]
1001fe61:	8b cf                	mov    ecx,edi
1001fe63:	50                   	push   eax
1001fe64:	e8 57 af 0f 00       	call   0x1011adc0
1001fe69:	5f                   	pop    edi
1001fe6a:	5e                   	pop    esi
1001fe6b:	5d                   	pop    ebp
1001fe6c:	c2 04 00             	ret    0x4
