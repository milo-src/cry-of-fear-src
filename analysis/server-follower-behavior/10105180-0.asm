
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10105180 <.text+0x104180>:
10105180:	55                   	push   ebp
10105181:	8b ec                	mov    ebp,esp
10105183:	83 ec 08             	sub    esp,0x8
10105186:	53                   	push   ebx
10105187:	56                   	push   esi
10105188:	33 f6                	xor    esi,esi
1010518a:	89 4d f8             	mov    DWORD PTR [ebp-0x8],ecx
1010518d:	33 db                	xor    ebx,ebx
1010518f:	33 c0                	xor    eax,eax
10105191:	57                   	push   edi
10105192:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
10105195:	6a 00                	push   0x0
10105197:	50                   	push   eax
10105198:	56                   	push   esi
10105199:	e8 a2 ee ff ff       	call   0x10104040
1010519e:	8b f0                	mov    esi,eax
101051a0:	85 f6                	test   esi,esi
101051a2:	74 45                	je     0x101051e9
101051a4:	8b 06                	mov    eax,DWORD PTR [esi]
101051a6:	8b ce                	mov    ecx,esi
101051a8:	ff 50 78             	call   DWORD PTR [eax+0x78]
101051ab:	8b f8                	mov    edi,eax
101051ad:	85 ff                	test   edi,edi
101051af:	74 24                	je     0x101051d5
101051b1:	8d 8f 8c 01 00 00    	lea    ecx,[edi+0x18c]
101051b7:	e8 d4 25 f1 ff       	call   0x10017790
101051bc:	3b 45 08             	cmp    eax,DWORD PTR [ebp+0x8]
101051bf:	75 14                	jne    0x101051d5
101051c1:	43                   	inc    ebx
101051c2:	3b 5d 0c             	cmp    ebx,DWORD PTR [ebp+0xc]
101051c5:	7e 0e                	jle    0x101051d5
101051c7:	8b 07                	mov    eax,DWORD PTR [edi]
101051c9:	8b cf                	mov    ecx,edi
101051cb:	6a 01                	push   0x1
101051cd:	6a 01                	push   0x1
101051cf:	ff 90 40 02 00 00    	call   DWORD PTR [eax+0x240]
101051d5:	8b 4d f8             	mov    ecx,DWORD PTR [ebp-0x8]
101051d8:	6a 00                	push   0x0
101051da:	ff 75 fc             	push   DWORD PTR [ebp-0x4]
101051dd:	56                   	push   esi
101051de:	e8 5d ee ff ff       	call   0x10104040
101051e3:	8b f0                	mov    esi,eax
101051e5:	85 f6                	test   esi,esi
101051e7:	75 bb                	jne    0x101051a4
101051e9:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
101051ec:	8b 4d f8             	mov    ecx,DWORD PTR [ebp-0x8]
101051ef:	40                   	inc    eax
101051f0:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
101051f3:	83 f8 06             	cmp    eax,0x6
101051f6:	7c 9d                	jl     0x10105195
101051f8:	5f                   	pop    edi
101051f9:	5e                   	pop    esi
101051fa:	5b                   	pop    ebx
101051fb:	8b e5                	mov    esp,ebp
101051fd:	5d                   	pop    ebp
101051fe:	c2 08 00             	ret    0x8
