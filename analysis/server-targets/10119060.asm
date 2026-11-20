
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10119060 <.text+0x118060>:
10119060:	55                   	push   ebp
10119061:	8b ec                	mov    ebp,esp
10119063:	83 ec 58             	sub    esp,0x58
10119066:	a1 f4 ba 21 10       	mov    eax,ds:0x1021baf4
1011906b:	33 c5                	xor    eax,ebp
1011906d:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
10119070:	8b 4d 08             	mov    ecx,DWORD PTR [ebp+0x8]
10119073:	53                   	push   ebx
10119074:	56                   	push   esi
10119075:	8b 75 0c             	mov    esi,DWORD PTR [ebp+0xc]
10119078:	57                   	push   edi
10119079:	85 c9                	test   ecx,ecx
1011907b:	74 5c                	je     0x101190d9
1011907d:	a1 88 31 22 10       	mov    eax,ds:0x10223188
10119082:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
10119088:	03 c1                	add    eax,ecx
1011908a:	8a 08                	mov    cl,BYTE PTR [eax]
1011908c:	8d 58 01             	lea    ebx,[eax+0x1]
1011908f:	80 f9 7e             	cmp    cl,0x7e
10119092:	88 4d ab             	mov    BYTE PTR [ebp-0x55],cl
10119095:	0f 45 d8             	cmovne ebx,eax
10119098:	53                   	push   ebx
10119099:	6a 00                	push   0x0
1011909b:	e8 f0 f4 ff ff       	call   0x10118590
101190a0:	83 c4 08             	add    esp,0x8
101190a3:	85 c0                	test   eax,eax
101190a5:	0f 85 dc 00 00 00    	jne    0x10119187
101190ab:	8a 03                	mov    al,BYTE PTR [ebx]
101190ad:	33 ff                	xor    edi,edi
101190af:	84 c0                	test   al,al
101190b1:	74 15                	je     0x101190c8
101190b3:	8b cb                	mov    ecx,ebx
101190b5:	8d 77 01             	lea    esi,[edi+0x1]
101190b8:	3c 28                	cmp    al,0x28
101190ba:	74 33                	je     0x101190ef
101190bc:	8b fe                	mov    edi,esi
101190be:	8a 04 3b             	mov    al,BYTE PTR [ebx+edi*1]
101190c1:	8d 0c 3b             	lea    ecx,[ebx+edi*1]
101190c4:	84 c0                	test   al,al
101190c6:	75 ed                	jne    0x101190b5
101190c8:	53                   	push   ebx
101190c9:	68 d4 57 1e 10       	push   0x101e57d4
101190ce:	6a 01                	push   0x1
101190d0:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
101190d6:	83 c4 0c             	add    esp,0xc
101190d9:	5f                   	pop    edi
101190da:	5e                   	pop    esi
101190db:	b8 01 00 00 00       	mov    eax,0x1
101190e0:	5b                   	pop    ebx
101190e1:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
101190e4:	33 cd                	xor    ecx,ebp
101190e6:	e8 c8 4a 02 00       	call   0x1013dbb3
101190eb:	8b e5                	mov    esp,ebp
101190ed:	5d                   	pop    ebp
101190ee:	c3                   	ret
101190ef:	8a 04 33             	mov    al,BYTE PTR [ebx+esi*1]
101190f2:	84 c0                	test   al,al
101190f4:	74 0d                	je     0x10119103
101190f6:	3c 29                	cmp    al,0x29
101190f8:	74 2d                	je     0x10119127
101190fa:	8a 44 33 01          	mov    al,BYTE PTR [ebx+esi*1+0x1]
101190fe:	46                   	inc    esi
101190ff:	84 c0                	test   al,al
10119101:	75 f3                	jne    0x101190f6
10119103:	53                   	push   ebx
10119104:	68 b8 57 1e 10       	push   0x101e57b8
10119109:	6a 04                	push   0x4
1011910b:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
10119111:	83 c4 0c             	add    esp,0xc
10119114:	33 c0                	xor    eax,eax
10119116:	5f                   	pop    edi
10119117:	5e                   	pop    esi
10119118:	5b                   	pop    ebx
10119119:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
1011911c:	33 cd                	xor    ecx,ebp
1011911e:	e8 90 4a 02 00       	call   0x1013dbb3
10119123:	8b e5                	mov    esp,ebp
10119125:	5d                   	pop    ebp
10119126:	c3                   	ret
10119127:	2b f7                	sub    esi,edi
10119129:	8d 46 ff             	lea    eax,[esi-0x1]
1011912c:	50                   	push   eax
1011912d:	8d 41 01             	lea    eax,[ecx+0x1]
10119130:	50                   	push   eax
10119131:	8d 45 ac             	lea    eax,[ebp-0x54]
10119134:	50                   	push   eax
10119135:	e8 c6 65 05 00       	call   0x1016f700
1011913a:	4e                   	dec    esi
1011913b:	83 c4 0c             	add    esp,0xc
1011913e:	83 fe 50             	cmp    esi,0x50
10119141:	0f 83 82 00 00 00    	jae    0x101191c9
10119147:	8d 45 ac             	lea    eax,[ebp-0x54]
1011914a:	c6 44 35 ac 00       	mov    BYTE PTR [ebp+esi*1-0x54],0x0
1011914f:	50                   	push   eax
10119150:	6a 00                	push   0x0
10119152:	e8 39 f4 ff ff       	call   0x10118590
10119157:	57                   	push   edi
10119158:	8b f0                	mov    esi,eax
1011915a:	8d 45 ac             	lea    eax,[ebp-0x54]
1011915d:	53                   	push   ebx
1011915e:	50                   	push   eax
1011915f:	e8 9c 65 05 00       	call   0x1016f700
10119164:	83 c4 14             	add    esp,0x14
10119167:	83 ff 50             	cmp    edi,0x50
1011916a:	73 5d                	jae    0x101191c9
1011916c:	8d 45 ac             	lea    eax,[ebp-0x54]
1011916f:	c6 44 3d ac 00       	mov    BYTE PTR [ebp+edi*1-0x54],0x0
10119174:	50                   	push   eax
10119175:	6a 00                	push   0x0
10119177:	e8 14 f4 ff ff       	call   0x10118590
1011917c:	83 c4 08             	add    esp,0x8
1011917f:	85 c0                	test   eax,eax
10119181:	0f 84 52 ff ff ff    	je     0x101190d9
10119187:	8b 10                	mov    edx,DWORD PTR [eax]
10119189:	8b c8                	mov    ecx,eax
1011918b:	56                   	push   esi
1011918c:	ff 52 58             	call   DWORD PTR [edx+0x58]
1011918f:	33 c9                	xor    ecx,ecx
10119191:	80 7d ab 7e          	cmp    BYTE PTR [ebp-0x55],0x7e
10119195:	75 19                	jne    0x101191b0
10119197:	83 f8 02             	cmp    eax,0x2
1011919a:	5f                   	pop    edi
1011919b:	0f 95 c1             	setne  cl
1011919e:	5e                   	pop    esi
1011919f:	8b c1                	mov    eax,ecx
101191a1:	5b                   	pop    ebx
101191a2:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
101191a5:	33 cd                	xor    ecx,ebp
101191a7:	e8 07 4a 02 00       	call   0x1013dbb3
101191ac:	8b e5                	mov    esp,ebp
101191ae:	5d                   	pop    ebp
101191af:	c3                   	ret
101191b0:	83 f8 02             	cmp    eax,0x2
101191b3:	5f                   	pop    edi
101191b4:	0f 94 c1             	sete   cl
101191b7:	8b c1                	mov    eax,ecx
101191b9:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
101191bc:	5e                   	pop    esi
101191bd:	33 cd                	xor    ecx,ebp
101191bf:	5b                   	pop    ebx
101191c0:	e8 ee 49 02 00       	call   0x1013dbb3
101191c5:	8b e5                	mov    esp,ebp
101191c7:	5d                   	pop    ebp
101191c8:	c3                   	ret
101191c9:	e8 7a 4b 02 00       	call   0x1013dd48
