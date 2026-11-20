
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10102ac0 <.text+0x101ac0>:
10102ac0:	55                   	push   ebp
10102ac1:	8b ec                	mov    ebp,esp
10102ac3:	56                   	push   esi
10102ac4:	57                   	push   edi
10102ac5:	8b 7d 08             	mov    edi,DWORD PTR [ebp+0x8]
10102ac8:	8b f1                	mov    esi,ecx
10102aca:	57                   	push   edi
10102acb:	e8 30 55 f1 ff       	call   0x10018000
10102ad0:	85 c0                	test   eax,eax
10102ad2:	75 06                	jne    0x10102ada
10102ad4:	5f                   	pop    edi
10102ad5:	5e                   	pop    esi
10102ad6:	5d                   	pop    ebp
10102ad7:	c2 04 00             	ret    0x4
10102ada:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
10102add:	a1 88 31 22 10       	mov    eax,ds:0x10223188
10102ae2:	6a 03                	push   0x3
10102ae4:	68 68 9a 21 10       	push   0x10219a68
10102ae9:	8b 91 d0 01 00 00    	mov    edx,DWORD PTR [ecx+0x1d0]
10102aef:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
10102af5:	56                   	push   esi
10102af6:	68 7c f4 1d 10       	push   0x101df47c
10102afb:	85 d2                	test   edx,edx
10102afd:	74 10                	je     0x10102b0f
10102aff:	03 c2                	add    eax,edx
10102b01:	8b cf                	mov    ecx,edi
10102b03:	50                   	push   eax
10102b04:	e8 b7 82 01 00       	call   0x1011adc0
10102b09:	5f                   	pop    edi
10102b0a:	5e                   	pop    esi
10102b0b:	5d                   	pop    ebp
10102b0c:	c2 04 00             	ret    0x4
10102b0f:	03 01                	add    eax,DWORD PTR [ecx]
10102b11:	8b cf                	mov    ecx,edi
10102b13:	50                   	push   eax
10102b14:	e8 a7 82 01 00       	call   0x1011adc0
10102b19:	5f                   	pop    edi
10102b1a:	5e                   	pop    esi
10102b1b:	5d                   	pop    ebp
10102b1c:	c2 04 00             	ret    0x4
