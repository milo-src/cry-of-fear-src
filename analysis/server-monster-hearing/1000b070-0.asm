
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1000b070 <.text+0xa070>:
1000b070:	53                   	push   ebx
1000b071:	56                   	push   esi
1000b072:	8b f1                	mov    esi,ecx
1000b074:	33 db                	xor    ebx,ebx
1000b076:	57                   	push   edi
1000b077:	8b 86 2c 02 00 00    	mov    eax,DWORD PTR [esi+0x22c]
1000b07d:	0f 1f 00             	nop    DWORD PTR [eax]
1000b080:	83 be 30 02 00 00 00 	cmp    DWORD PTR [esi+0x230],0x0
1000b087:	74 0c                	je     0x1000b095
1000b089:	83 f8 04             	cmp    eax,0x4
1000b08c:	75 07                	jne    0x1000b095
1000b08e:	8b ce                	mov    ecx,esi
1000b090:	e8 9b 01 00 00       	call   0x1000b230
1000b095:	8b ce                	mov    ecx,esi
1000b097:	e8 d4 fa ff ff       	call   0x1000ab70
1000b09c:	85 c0                	test   eax,eax
1000b09e:	74 12                	je     0x1000b0b2
1000b0a0:	8b 86 24 02 00 00    	mov    eax,DWORD PTR [esi+0x224]
1000b0a6:	3b 86 28 02 00 00    	cmp    eax,DWORD PTR [esi+0x228]
1000b0ac:	0f 84 e1 00 00 00    	je     0x1000b193
1000b0b2:	8b 06                	mov    eax,DWORD PTR [esi]
1000b0b4:	8b ce                	mov    ecx,esi
1000b0b6:	ff 90 94 01 00 00    	call   DWORD PTR [eax+0x194]
1000b0bc:	8b 86 28 02 00 00    	mov    eax,DWORD PTR [esi+0x228]
1000b0c2:	83 f8 08             	cmp    eax,0x8
1000b0c5:	74 4b                	je     0x1000b112
1000b0c7:	83 f8 06             	cmp    eax,0x6
1000b0ca:	75 08                	jne    0x1000b0d4
1000b0cc:	39 86 24 02 00 00    	cmp    DWORD PTR [esi+0x224],eax
1000b0d2:	75 3e                	jne    0x1000b112
1000b0d4:	8b 86 80 01 00 00    	mov    eax,DWORD PTR [esi+0x180]
1000b0da:	85 c0                	test   eax,eax
1000b0dc:	74 02                	je     0x1000b0e0
1000b0de:	79 28                	jns    0x1000b108
1000b0e0:	8b 86 30 02 00 00    	mov    eax,DWORD PTR [esi+0x230]
1000b0e6:	85 c0                	test   eax,eax
1000b0e8:	74 06                	je     0x1000b0f0
1000b0ea:	83 78 08 00          	cmp    DWORD PTR [eax+0x8],0x0
1000b0ee:	7c 18                	jl     0x1000b108
1000b0f0:	83 be 24 02 00 00 02 	cmp    DWORD PTR [esi+0x224],0x2
1000b0f7:	75 19                	jne    0x1000b112
1000b0f9:	8d 8e 84 01 00 00    	lea    ecx,[esi+0x184]
1000b0ff:	e8 7c c6 00 00       	call   0x10017780
1000b104:	85 c0                	test   eax,eax
1000b106:	75 0a                	jne    0x1000b112
1000b108:	8b 06                	mov    eax,DWORD PTR [esi]
1000b10a:	8b ce                	mov    ecx,esi
1000b10c:	ff 90 ac 01 00 00    	call   DWORD PTR [eax+0x1ac]
1000b112:	f7 86 80 01 00 00 00 	test   DWORD PTR [esi+0x180],0x40000000
1000b119:	00 00 40 
1000b11c:	8b 86 28 02 00 00    	mov    eax,DWORD PTR [esi+0x228]
1000b122:	74 3c                	je     0x1000b160
1000b124:	39 86 24 02 00 00    	cmp    DWORD PTR [esi+0x224],eax
1000b12a:	75 34                	jne    0x1000b160
1000b12c:	8b 8e 20 03 00 00    	mov    ecx,DWORD PTR [esi+0x320]
1000b132:	8b 06                	mov    eax,DWORD PTR [esi]
1000b134:	85 c9                	test   ecx,ecx
1000b136:	74 03                	je     0x1000b13b
1000b138:	51                   	push   ecx
1000b139:	eb 02                	jmp    0x1000b13d
1000b13b:	6a 29                	push   0x29
1000b13d:	8b ce                	mov    ecx,esi
1000b13f:	ff 90 8c 01 00 00    	call   DWORD PTR [eax+0x18c]
1000b145:	ff b6 34 02 00 00    	push   DWORD PTR [esi+0x234]
1000b14b:	8b f8                	mov    edi,eax
1000b14d:	68 00 20 1a 10       	push   0x101a2000
1000b152:	6a 02                	push   0x2
1000b154:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
1000b15a:	83 c4 0c             	add    esp,0xc
1000b15d:	57                   	push   edi
1000b15e:	eb 2c                	jmp    0x1000b18c
1000b160:	50                   	push   eax
1000b161:	8b ce                	mov    ecx,esi
1000b163:	e8 08 79 0b 00       	call   0x100c2a70
1000b168:	8b 86 24 02 00 00    	mov    eax,DWORD PTR [esi+0x224]
1000b16e:	83 f8 06             	cmp    eax,0x6
1000b171:	74 11                	je     0x1000b184
1000b173:	83 f8 08             	cmp    eax,0x8
1000b176:	74 0c                	je     0x1000b184
1000b178:	8b 06                	mov    eax,DWORD PTR [esi]
1000b17a:	8b ce                	mov    ecx,esi
1000b17c:	ff 90 90 01 00 00    	call   DWORD PTR [eax+0x190]
1000b182:	eb 07                	jmp    0x1000b18b
1000b184:	8b ce                	mov    ecx,esi
1000b186:	e8 65 fa ff ff       	call   0x1000abf0
1000b18b:	50                   	push   eax
1000b18c:	8b ce                	mov    ecx,esi
1000b18e:	e8 bd f8 ff ff       	call   0x1000aa50
1000b193:	83 be 2c 02 00 00 00 	cmp    DWORD PTR [esi+0x22c],0x0
1000b19a:	75 1c                	jne    0x1000b1b8
1000b19c:	8b ce                	mov    ecx,esi
1000b19e:	e8 3d fe ff ff       	call   0x1000afe0
1000b1a3:	8b 16                	mov    edx,DWORD PTR [esi]
1000b1a5:	8b ce                	mov    ecx,esi
1000b1a7:	50                   	push   eax
1000b1a8:	c7 86 2c 02 00 00 01 	mov    DWORD PTR [esi+0x22c],0x1
1000b1af:	00 00 00 
1000b1b2:	ff 92 84 01 00 00    	call   DWORD PTR [edx+0x184]
1000b1b8:	8b 8e 18 02 00 00    	mov    ecx,DWORD PTR [esi+0x218]
1000b1be:	39 8e 14 02 00 00    	cmp    DWORD PTR [esi+0x214],ecx
1000b1c4:	74 0b                	je     0x1000b1d1
1000b1c6:	8b 06                	mov    eax,DWORD PTR [esi]
1000b1c8:	51                   	push   ecx
1000b1c9:	8b ce                	mov    ecx,esi
1000b1cb:	ff 90 b0 01 00 00    	call   DWORD PTR [eax+0x1b0]
1000b1d1:	8b 86 2c 02 00 00    	mov    eax,DWORD PTR [esi+0x22c]
1000b1d7:	83 f8 04             	cmp    eax,0x4
1000b1da:	74 04                	je     0x1000b1e0
1000b1dc:	85 c0                	test   eax,eax
1000b1de:	75 0a                	jne    0x1000b1ea
1000b1e0:	43                   	inc    ebx
1000b1e1:	83 fb 0a             	cmp    ebx,0xa
1000b1e4:	0f 8c 96 fe ff ff    	jl     0x1000b080
1000b1ea:	8b ce                	mov    ecx,esi
1000b1ec:	e8 ff 74 0b 00       	call   0x100c26f0
1000b1f1:	85 c0                	test   eax,eax
1000b1f3:	74 12                	je     0x1000b207
1000b1f5:	8b ce                	mov    ecx,esi
1000b1f7:	e8 e4 fd ff ff       	call   0x1000afe0
1000b1fc:	8b 16                	mov    edx,DWORD PTR [esi]
1000b1fe:	8b ce                	mov    ecx,esi
1000b200:	50                   	push   eax
1000b201:	ff 92 88 01 00 00    	call   DWORD PTR [edx+0x188]
1000b207:	8b 8e 18 02 00 00    	mov    ecx,DWORD PTR [esi+0x218]
1000b20d:	39 8e 14 02 00 00    	cmp    DWORD PTR [esi+0x214],ecx
1000b213:	74 0b                	je     0x1000b220
1000b215:	8b 06                	mov    eax,DWORD PTR [esi]
1000b217:	51                   	push   ecx
1000b218:	8b ce                	mov    ecx,esi
1000b21a:	ff 90 b0 01 00 00    	call   DWORD PTR [eax+0x1b0]
1000b220:	5f                   	pop    edi
1000b221:	5e                   	pop    esi
1000b222:	5b                   	pop    ebx
1000b223:	c3                   	ret
