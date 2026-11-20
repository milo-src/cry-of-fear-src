
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1009aff0 <.text+0x99ff0>:
1009aff0:	55                   	push   ebp
1009aff1:	8b ec                	mov    ebp,esp
1009aff3:	56                   	push   esi
1009aff4:	57                   	push   edi
1009aff5:	8b 7d 08             	mov    edi,DWORD PTR [ebp+0x8]
1009aff8:	8b f1                	mov    esi,ecx
1009affa:	57                   	push   edi
1009affb:	e8 00 d0 f7 ff       	call   0x10018000
1009b000:	85 c0                	test   eax,eax
1009b002:	75 06                	jne    0x1009b00a
1009b004:	5f                   	pop    edi
1009b005:	5e                   	pop    esi
1009b006:	5d                   	pop    ebp
1009b007:	c2 04 00             	ret    0x4
1009b00a:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
1009b00d:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1009b012:	6a 01                	push   0x1
1009b014:	68 b8 40 21 10       	push   0x102140b8
1009b019:	8b 91 d0 01 00 00    	mov    edx,DWORD PTR [ecx+0x1d0]
1009b01f:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
1009b025:	56                   	push   esi
1009b026:	68 ac 3c 1c 10       	push   0x101c3cac
1009b02b:	85 d2                	test   edx,edx
1009b02d:	74 10                	je     0x1009b03f
1009b02f:	03 c2                	add    eax,edx
1009b031:	8b cf                	mov    ecx,edi
1009b033:	50                   	push   eax
1009b034:	e8 87 fd 07 00       	call   0x1011adc0
1009b039:	5f                   	pop    edi
1009b03a:	5e                   	pop    esi
1009b03b:	5d                   	pop    ebp
1009b03c:	c2 04 00             	ret    0x4
1009b03f:	03 01                	add    eax,DWORD PTR [ecx]
1009b041:	8b cf                	mov    ecx,edi
1009b043:	50                   	push   eax
1009b044:	e8 77 fd 07 00       	call   0x1011adc0
1009b049:	5f                   	pop    edi
1009b04a:	5e                   	pop    esi
1009b04b:	5d                   	pop    ebp
1009b04c:	c2 04 00             	ret    0x4
