
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100baeb0 <.text+0xb9eb0>:
100baeb0:	55                   	push   ebp
100baeb1:	8b ec                	mov    ebp,esp
100baeb3:	56                   	push   esi
100baeb4:	57                   	push   edi
100baeb5:	8b 7d 08             	mov    edi,DWORD PTR [ebp+0x8]
100baeb8:	8b f1                	mov    esi,ecx
100baeba:	57                   	push   edi
100baebb:	e8 40 d1 f5 ff       	call   0x10018000
100baec0:	85 c0                	test   eax,eax
100baec2:	75 06                	jne    0x100baeca
100baec4:	5f                   	pop    edi
100baec5:	5e                   	pop    esi
100baec6:	5d                   	pop    ebp
100baec7:	c2 04 00             	ret    0x4
100baeca:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
100baecd:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100baed2:	6a 01                	push   0x1
100baed4:	68 f8 6c 21 10       	push   0x10216cf8
100baed9:	8b 91 d0 01 00 00    	mov    edx,DWORD PTR [ecx+0x1d0]
100baedf:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
100baee5:	56                   	push   esi
100baee6:	68 28 38 1d 10       	push   0x101d3828
100baeeb:	85 d2                	test   edx,edx
100baeed:	74 10                	je     0x100baeff
100baeef:	03 c2                	add    eax,edx
100baef1:	8b cf                	mov    ecx,edi
100baef3:	50                   	push   eax
100baef4:	e8 c7 fe 05 00       	call   0x1011adc0
100baef9:	5f                   	pop    edi
100baefa:	5e                   	pop    esi
100baefb:	5d                   	pop    ebp
100baefc:	c2 04 00             	ret    0x4
100baeff:	03 01                	add    eax,DWORD PTR [ecx]
100baf01:	8b cf                	mov    ecx,edi
100baf03:	50                   	push   eax
100baf04:	e8 b7 fe 05 00       	call   0x1011adc0
100baf09:	5f                   	pop    edi
100baf0a:	5e                   	pop    esi
100baf0b:	5d                   	pop    ebp
100baf0c:	c2 04 00             	ret    0x4
