
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1001fe70 <.text+0x1ee70>:
1001fe70:	55                   	push   ebp
1001fe71:	8b ec                	mov    ebp,esp
1001fe73:	56                   	push   esi
1001fe74:	ff 75 08             	push   DWORD PTR [ebp+0x8]
1001fe77:	8b f1                	mov    esi,ecx
1001fe79:	e8 32 eb fe ff       	call   0x1000e9b0
1001fe7e:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
1001fe81:	83 f8 ff             	cmp    eax,0xffffffff
1001fe84:	7e 30                	jle    0x1001feb6
1001fe86:	39 81 2c 01 00 00    	cmp    DWORD PTR [ecx+0x12c],eax
1001fe8c:	75 09                	jne    0x1001fe97
1001fe8e:	83 be fc 00 00 00 00 	cmp    DWORD PTR [esi+0xfc],0x0
1001fe95:	75 0d                	jne    0x1001fea4
1001fe97:	c7 81 34 01 00 00 00 	mov    DWORD PTR [ecx+0x134],0x0
1001fe9e:	00 00 00 
1001fea1:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
1001fea4:	89 81 2c 01 00 00    	mov    DWORD PTR [ecx+0x12c],eax
1001feaa:	8b ce                	mov    ecx,esi
1001feac:	e8 2f eb fe ff       	call   0x1000e9e0
1001feb1:	5e                   	pop    esi
1001feb2:	5d                   	pop    ebp
1001feb3:	c2 04 00             	ret    0x4
1001feb6:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1001febb:	ff 75 08             	push   DWORD PTR [ebp+0x8]
1001febe:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
1001fec4:	03 01                	add    eax,DWORD PTR [ecx]
1001fec6:	50                   	push   eax
1001fec7:	68 8c 98 1a 10       	push   0x101a988c
1001fecc:	6a 02                	push   0x2
1001fece:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
1001fed4:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1001fed7:	83 c4 10             	add    esp,0x10
1001feda:	c7 80 2c 01 00 00 00 	mov    DWORD PTR [eax+0x12c],0x0
1001fee1:	00 00 00 
1001fee4:	5e                   	pop    esi
1001fee5:	5d                   	pop    ebp
1001fee6:	c2 04 00             	ret    0x4
