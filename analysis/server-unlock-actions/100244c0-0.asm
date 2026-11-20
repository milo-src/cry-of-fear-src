
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100244c0 <.text+0x234c0>:
100244c0:	55                   	push   ebp
100244c1:	8b ec                	mov    ebp,esp
100244c3:	56                   	push   esi
100244c4:	8b f1                	mov    esi,ecx
100244c6:	8b 4d 08             	mov    ecx,DWORD PTR [ebp+0x8]
100244c9:	85 c9                	test   ecx,ecx
100244cb:	74 2b                	je     0x100244f8
100244cd:	80 be bc 01 00 00 00 	cmp    BYTE PTR [esi+0x1bc],0x0
100244d4:	75 22                	jne    0x100244f8
100244d6:	6a 00                	push   0x0
100244d8:	6a 00                	push   0x0
100244da:	68 00 00 20 00       	push   0x200000
100244df:	c6 86 bc 01 00 00 01 	mov    BYTE PTR [esi+0x1bc],0x1
100244e6:	e8 15 8b 0b 00       	call   0x100dd000
100244eb:	84 c0                	test   al,al
100244ed:	75 09                	jne    0x100244f8
100244ef:	56                   	push   esi
100244f0:	e8 0b 54 0f 00       	call   0x10119900
100244f5:	83 c4 04             	add    esp,0x4
100244f8:	5e                   	pop    esi
100244f9:	5d                   	pop    ebp
100244fa:	c2 04 00             	ret    0x4
