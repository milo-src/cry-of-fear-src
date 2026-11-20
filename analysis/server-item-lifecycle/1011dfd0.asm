
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1011dfd0 <.text+0x11cfd0>:
1011dfd0:	56                   	push   esi
1011dfd1:	8b f1                	mov    esi,ecx
1011dfd3:	57                   	push   edi
1011dfd4:	8b 4e 14             	mov    ecx,DWORD PTR [esi+0x14]
1011dfd7:	c7 86 80 00 00 00 00 	mov    DWORD PTR [esi+0x80],0x0
1011dfde:	00 00 00 
1011dfe1:	85 c9                	test   ecx,ecx
1011dfe3:	74 0a                	je     0x1011dfef
1011dfe5:	8b 01                	mov    eax,DWORD PTR [ecx]
1011dfe7:	ff 50 40             	call   DWORD PTR [eax+0x40]
1011dfea:	83 e0 02             	and    eax,0x2
1011dfed:	eb 05                	jmp    0x1011dff4
1011dfef:	b8 02 00 00 00       	mov    eax,0x2
1011dff4:	89 86 08 01 00 00    	mov    DWORD PTR [esi+0x108],eax
1011dffa:	ba b8 8a 1a 10       	mov    edx,0x101a8ab8
1011dfff:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1011e002:	c7 46 7c 00 00 00 00 	mov    DWORD PTR [esi+0x7c],0x0
1011e009:	c7 80 c0 01 00 00 00 	mov    DWORD PTR [eax+0x1c0],0x0
1011e010:	00 00 00 
1011e013:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1011e016:	8b b8 0c 02 00 00    	mov    edi,DWORD PTR [eax+0x20c]
1011e01c:	8b cf                	mov    ecx,edi
1011e01e:	f7 d9                	neg    ecx
1011e020:	1b c9                	sbb    ecx,ecx
1011e022:	8d 87 80 00 00 00    	lea    eax,[edi+0x80]
1011e028:	23 c8                	and    ecx,eax
1011e02a:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1011e02f:	8b 09                	mov    ecx,DWORD PTR [ecx]
1011e031:	03 88 98 00 00 00    	add    ecx,DWORD PTR [eax+0x98]
1011e037:	8a 01                	mov    al,BYTE PTR [ecx]
1011e039:	3a 02                	cmp    al,BYTE PTR [edx]
1011e03b:	75 1a                	jne    0x1011e057
1011e03d:	84 c0                	test   al,al
1011e03f:	74 12                	je     0x1011e053
1011e041:	8a 41 01             	mov    al,BYTE PTR [ecx+0x1]
1011e044:	3a 42 01             	cmp    al,BYTE PTR [edx+0x1]
1011e047:	75 0e                	jne    0x1011e057
1011e049:	83 c1 02             	add    ecx,0x2
1011e04c:	83 c2 02             	add    edx,0x2
1011e04f:	84 c0                	test   al,al
1011e051:	75 e4                	jne    0x1011e037
1011e053:	33 c0                	xor    eax,eax
1011e055:	eb 05                	jmp    0x1011e05c
1011e057:	1b c0                	sbb    eax,eax
1011e059:	83 c8 01             	or     eax,0x1
1011e05c:	85 c0                	test   eax,eax
1011e05e:	75 6a                	jne    0x1011e0ca
1011e060:	6a 64                	push   0x64
1011e062:	6a 20                	push   0x20
1011e064:	83 ec 08             	sub    esp,0x8
1011e067:	89 44 24 04          	mov    DWORD PTR [esp+0x4],eax
1011e06b:	89 04 24             	mov    DWORD PTR [esp],eax
1011e06e:	68 c8 8a 1a 10       	push   0x101a8ac8
1011e073:	6a 01                	push   0x1
1011e075:	57                   	push   edi
1011e076:	e8 75 e9 fd ff       	call   0x100fc9f0
1011e07b:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1011e07e:	83 c4 18             	add    esp,0x18
1011e081:	8b ce                	mov    ecx,esi
1011e083:	c7 80 60 01 00 00 00 	mov    DWORD PTR [eax+0x160],0x0
1011e08a:	00 00 00 
1011e08d:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1011e090:	c7 04 24 00 00 00 00 	mov    DWORD PTR [esp],0x0
1011e097:	c7 80 4c 01 00 00 05 	mov    DWORD PTR [eax+0x14c],0x5
1011e09e:	00 00 00 
1011e0a1:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1011e0a4:	c7 80 50 01 00 00 00 	mov    DWORD PTR [eax+0x150],0x0
1011e0ab:	00 00 00 
1011e0ae:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1011e0b1:	c7 80 14 01 00 00 00 	mov    DWORD PTR [eax+0x114],0x0
1011e0b8:	00 00 00 
1011e0bb:	8b 06                	mov    eax,DWORD PTR [esi]
1011e0bd:	c7 46 78 e0 28 10 10 	mov    DWORD PTR [esi+0x78],0x101028e0
1011e0c4:	ff 50 08             	call   DWORD PTR [eax+0x8]
1011e0c7:	5f                   	pop    edi
1011e0c8:	5e                   	pop    esi
1011e0c9:	c3                   	ret
1011e0ca:	8b 06                	mov    eax,DWORD PTR [esi]
1011e0cc:	51                   	push   ecx
1011e0cd:	8b ce                	mov    ecx,esi
1011e0cf:	c7 04 24 cd cc cc 3d 	mov    DWORD PTR [esp],0x3dcccccd
1011e0d6:	c7 46 78 e0 28 10 10 	mov    DWORD PTR [esi+0x78],0x101028e0
1011e0dd:	ff 50 08             	call   DWORD PTR [eax+0x8]
1011e0e0:	5f                   	pop    edi
1011e0e1:	5e                   	pop    esi
1011e0e2:	c3                   	ret
