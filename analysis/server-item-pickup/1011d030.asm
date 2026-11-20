
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1011d030 <.text+0x11c030>:
1011d030:	55                   	push   ebp
1011d031:	8b ec                	mov    ebp,esp
1011d033:	53                   	push   ebx
1011d034:	8b 5d 08             	mov    ebx,DWORD PTR [ebp+0x8]
1011d037:	57                   	push   edi
1011d038:	8b f9                	mov    edi,ecx
1011d03a:	33 c9                	xor    ecx,ecx
1011d03c:	81 bb e4 01 00 00 66 	cmp    DWORD PTR [ebx+0x1e4],0xfffffd66
1011d043:	fd ff ff 
1011d046:	75 19                	jne    0x1011d061
1011d048:	6b 87 68 01 00 00 2c 	imul   eax,DWORD PTR [edi+0x168],0x2c
1011d04f:	83 b8 a4 18 23 10 ff 	cmp    DWORD PTR [eax+0x102318a4],0xffffffff
1011d056:	74 09                	je     0x1011d061
1011d058:	5f                   	pop    edi
1011d059:	8d 41 01             	lea    eax,[ecx+0x1]
1011d05c:	5b                   	pop    ebx
1011d05d:	5d                   	pop    ebp
1011d05e:	c2 04 00             	ret    0x4
1011d061:	8b 87 68 01 00 00    	mov    eax,DWORD PTR [edi+0x168]
1011d067:	56                   	push   esi
1011d068:	6b f0 2c             	imul   esi,eax,0x2c
1011d06b:	8b 96 90 18 23 10    	mov    edx,DWORD PTR [esi+0x10231890]
1011d071:	89 55 08             	mov    DWORD PTR [ebp+0x8],edx
1011d074:	85 d2                	test   edx,edx
1011d076:	74 31                	je     0x1011d0a9
1011d078:	8b b6 a4 18 23 10    	mov    esi,DWORD PTR [esi+0x102318a4]
1011d07e:	8b cf                	mov    ecx,edi
1011d080:	e8 6b 32 00 00       	call   0x101202f0
1011d085:	50                   	push   eax
1011d086:	56                   	push   esi
1011d087:	ff 75 08             	push   DWORD PTR [ebp+0x8]
1011d08a:	8b cb                	mov    ecx,ebx
1011d08c:	ff b7 f4 01 00 00    	push   DWORD PTR [edi+0x1f4]
1011d092:	e8 09 e6 ff ff       	call   0x1011b6a0
1011d097:	8b c8                	mov    ecx,eax
1011d099:	c7 87 f4 01 00 00 00 	mov    DWORD PTR [edi+0x1f4],0x0
1011d0a0:	00 00 00 
1011d0a3:	8b 87 68 01 00 00    	mov    eax,DWORD PTR [edi+0x168]
1011d0a9:	6b c0 2c             	imul   eax,eax,0x2c
1011d0ac:	5e                   	pop    esi
1011d0ad:	8b 90 98 18 23 10    	mov    edx,DWORD PTR [eax+0x10231898]
1011d0b3:	85 d2                	test   edx,edx
1011d0b5:	74 12                	je     0x1011d0c9
1011d0b7:	ff b0 9c 18 23 10    	push   DWORD PTR [eax+0x1023189c]
1011d0bd:	8b cb                	mov    ecx,ebx
1011d0bf:	52                   	push   edx
1011d0c0:	6a 00                	push   0x0
1011d0c2:	e8 f9 e6 ff ff       	call   0x1011b7c0
1011d0c7:	8b c8                	mov    ecx,eax
1011d0c9:	5f                   	pop    edi
1011d0ca:	8b c1                	mov    eax,ecx
1011d0cc:	5b                   	pop    ebx
1011d0cd:	5d                   	pop    ebp
1011d0ce:	c2 04 00             	ret    0x4
