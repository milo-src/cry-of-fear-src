
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10169fb8 <.text+0x168fb8>:
10169fb8:	8b ff                	mov    edi,edi
10169fba:	55                   	push   ebp
10169fbb:	8b ec                	mov    ebp,esp
10169fbd:	f6 45 08 04          	test   BYTE PTR [ebp+0x8],0x4
10169fc1:	75 15                	jne    0x10169fd8
10169fc3:	f6 45 08 01          	test   BYTE PTR [ebp+0x8],0x1
10169fc7:	74 1c                	je     0x10169fe5
10169fc9:	f6 45 08 02          	test   BYTE PTR [ebp+0x8],0x2
10169fcd:	74 0d                	je     0x10169fdc
10169fcf:	81 7d 0c 00 00 00 80 	cmp    DWORD PTR [ebp+0xc],0x80000000
10169fd6:	76 0d                	jbe    0x10169fe5
10169fd8:	b0 01                	mov    al,0x1
10169fda:	5d                   	pop    ebp
10169fdb:	c3                   	ret
10169fdc:	81 7d 0c ff ff ff 7f 	cmp    DWORD PTR [ebp+0xc],0x7fffffff
10169fe3:	77 f3                	ja     0x10169fd8
10169fe5:	32 c0                	xor    al,al
10169fe7:	5d                   	pop    ebp
10169fe8:	c3                   	ret
