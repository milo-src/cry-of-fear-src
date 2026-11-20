
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100c6f50 <.text+0xc5f50>:
100c6f50:	55                   	push   ebp
100c6f51:	8b ec                	mov    ebp,esp
100c6f53:	f3 0f 10 05 6c 46 21 	movss  xmm0,DWORD PTR ds:0x1021466c
100c6f5a:	10 
100c6f5b:	0f 2f 05 70 13 1a 10 	comiss xmm0,DWORD PTR ds:0x101a1370
100c6f62:	53                   	push   ebx
100c6f63:	56                   	push   esi
100c6f64:	57                   	push   edi
100c6f65:	8b 7d 0c             	mov    edi,DWORD PTR [ebp+0xc]
100c6f68:	8b d9                	mov    ebx,ecx
100c6f6a:	76 45                	jbe    0x100c6fb1
100c6f6c:	8b 97 68 01 00 00    	mov    edx,DWORD PTR [edi+0x168]
100c6f72:	6b c2 2c             	imul   eax,edx,0x2c
100c6f75:	f6 80 ac 18 23 10 08 	test   BYTE PTR [eax+0x102318ac],0x8
100c6f7c:	75 35                	jne    0x100c6fb3
100c6f7e:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
100c6f81:	33 c9                	xor    ecx,ecx
100c6f83:	81 c6 14 25 00 00    	add    esi,0x2514
100c6f89:	0f 1f 80 00 00 00 00 	nop    DWORD PTR [eax+0x0]
100c6f90:	8b 06                	mov    eax,DWORD PTR [esi]
100c6f92:	85 c0                	test   eax,eax
100c6f94:	74 12                	je     0x100c6fa8
100c6f96:	39 90 68 01 00 00    	cmp    DWORD PTR [eax+0x168],edx
100c6f9c:	74 25                	je     0x100c6fc3
100c6f9e:	8b 80 64 01 00 00    	mov    eax,DWORD PTR [eax+0x164]
100c6fa4:	85 c0                	test   eax,eax
100c6fa6:	75 ee                	jne    0x100c6f96
100c6fa8:	41                   	inc    ecx
100c6fa9:	83 c6 04             	add    esi,0x4
100c6fac:	83 f9 06             	cmp    ecx,0x6
100c6faf:	7c df                	jl     0x100c6f90
100c6fb1:	8b cb                	mov    ecx,ebx
100c6fb3:	57                   	push   edi
100c6fb4:	ff 75 08             	push   DWORD PTR [ebp+0x8]
100c6fb7:	e8 a4 85 fe ff       	call   0x100af560
100c6fbc:	5f                   	pop    edi
100c6fbd:	5e                   	pop    esi
100c6fbe:	5b                   	pop    ebx
100c6fbf:	5d                   	pop    ebp
100c6fc0:	c2 08 00             	ret    0x8
100c6fc3:	5f                   	pop    edi
100c6fc4:	5e                   	pop    esi
100c6fc5:	33 c0                	xor    eax,eax
100c6fc7:	5b                   	pop    ebx
100c6fc8:	5d                   	pop    ebp
100c6fc9:	c2 08 00             	ret    0x8
