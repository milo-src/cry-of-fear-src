
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100c19a0 <.text+0xc09a0>:
100c19a0:	55                   	push   ebp
100c19a1:	8b ec                	mov    ebp,esp
100c19a3:	56                   	push   esi
100c19a4:	57                   	push   edi
100c19a5:	8b 7d 08             	mov    edi,DWORD PTR [ebp+0x8]
100c19a8:	8b f1                	mov    esi,ecx
100c19aa:	57                   	push   edi
100c19ab:	e8 e0 0e 04 00       	call   0x10102890
100c19b0:	85 c0                	test   eax,eax
100c19b2:	75 06                	jne    0x100c19ba
100c19b4:	5f                   	pop    edi
100c19b5:	5e                   	pop    esi
100c19b6:	5d                   	pop    ebp
100c19b7:	c2 04 00             	ret    0x4
100c19ba:	6a 31                	push   0x31
100c19bc:	68 08 6e 21 10       	push   0x10216e08
100c19c1:	56                   	push   esi
100c19c2:	68 fc 4d 1d 10       	push   0x101d4dfc
100c19c7:	8b cf                	mov    ecx,edi
100c19c9:	e8 42 56 05 00       	call   0x10117010
100c19ce:	8b ce                	mov    ecx,esi
100c19d0:	8b f8                	mov    edi,eax
100c19d2:	e8 99 00 00 00       	call   0x100c1a70
100c19d7:	8d 8e 84 01 00 00    	lea    ecx,[esi+0x184]
100c19dd:	c7 86 30 02 00 00 00 	mov    DWORD PTR [esi+0x230],0x0
100c19e4:	00 00 00 
100c19e7:	c7 86 2c 02 00 00 00 	mov    DWORD PTR [esi+0x22c],0x0
100c19ee:	00 00 00 
100c19f1:	c7 86 14 02 00 00 00 	mov    DWORD PTR [esi+0x214],0x0
100c19f8:	00 00 00 
100c19fb:	e8 80 5d f5 ff       	call   0x10017780
100c1a00:	85 c0                	test   eax,eax
100c1a02:	75 06                	jne    0x100c1a0a
100c1a04:	89 86 80 01 00 00    	mov    DWORD PTR [esi+0x180],eax
100c1a0a:	8b c7                	mov    eax,edi
100c1a0c:	5f                   	pop    edi
100c1a0d:	5e                   	pop    esi
100c1a0e:	5d                   	pop    ebp
100c1a0f:	c2 04 00             	ret    0x4
