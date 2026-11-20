
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1000e120 <.text+0xd120>:
1000e120:	55                   	push   ebp
1000e121:	8b ec                	mov    ebp,esp
1000e123:	56                   	push   esi
1000e124:	57                   	push   edi
1000e125:	8b 7d 08             	mov    edi,DWORD PTR [ebp+0x8]
1000e128:	8b f1                	mov    esi,ecx
1000e12a:	57                   	push   edi
1000e12b:	e8 d0 9e 00 00       	call   0x10018000
1000e130:	85 c0                	test   eax,eax
1000e132:	75 06                	jne    0x1000e13a
1000e134:	5f                   	pop    edi
1000e135:	5e                   	pop    esi
1000e136:	5d                   	pop    ebp
1000e137:	c2 04 00             	ret    0x4
1000e13a:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
1000e13d:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1000e142:	6a 04                	push   0x4
1000e144:	68 e8 10 21 10       	push   0x102110e8
1000e149:	8b 91 d0 01 00 00    	mov    edx,DWORD PTR [ecx+0x1d0]
1000e14f:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
1000e155:	56                   	push   esi
1000e156:	68 04 2b 1a 10       	push   0x101a2b04
1000e15b:	85 d2                	test   edx,edx
1000e15d:	74 10                	je     0x1000e16f
1000e15f:	03 c2                	add    eax,edx
1000e161:	8b cf                	mov    ecx,edi
1000e163:	50                   	push   eax
1000e164:	e8 57 cc 10 00       	call   0x1011adc0
1000e169:	5f                   	pop    edi
1000e16a:	5e                   	pop    esi
1000e16b:	5d                   	pop    ebp
1000e16c:	c2 04 00             	ret    0x4
1000e16f:	03 01                	add    eax,DWORD PTR [ecx]
1000e171:	8b cf                	mov    ecx,edi
1000e173:	50                   	push   eax
1000e174:	e8 47 cc 10 00       	call   0x1011adc0
1000e179:	5f                   	pop    edi
1000e17a:	5e                   	pop    esi
1000e17b:	5d                   	pop    ebp
1000e17c:	c2 04 00             	ret    0x4
