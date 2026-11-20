
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

101050b0 <.text+0x1040b0>:
101050b0:	55                   	push   ebp
101050b1:	8b ec                	mov    ebp,esp
101050b3:	53                   	push   ebx
101050b4:	8b 5d 08             	mov    ebx,DWORD PTR [ebp+0x8]
101050b7:	56                   	push   esi
101050b8:	8b f1                	mov    esi,ecx
101050ba:	85 db                	test   ebx,ebx
101050bc:	0f 84 84 00 00 00    	je     0x10105146
101050c2:	83 be 24 02 00 00 05 	cmp    DWORD PTR [esi+0x224],0x5
101050c9:	74 7b                	je     0x10105146
101050cb:	f6 83 a8 01 00 00 08 	test   BYTE PTR [ebx+0x1a8],0x8
101050d2:	74 37                	je     0x1010510b
101050d4:	e8 97 ee ff ff       	call   0x10103f70
101050d9:	8b 83 0c 02 00 00    	mov    eax,DWORD PTR [ebx+0x20c]
101050df:	85 c0                	test   eax,eax
101050e1:	75 19                	jne    0x101050fc
101050e3:	50                   	push   eax
101050e4:	ff 15 5c 30 22 10    	call   DWORD PTR ds:0x1022305c
101050ea:	83 c4 04             	add    esp,0x4
101050ed:	85 c0                	test   eax,eax
101050ef:	75 0b                	jne    0x101050fc
101050f1:	50                   	push   eax
101050f2:	50                   	push   eax
101050f3:	8b ce                	mov    ecx,esi
101050f5:	e8 86 00 00 00       	call   0x10105180
101050fa:	eb 4a                	jmp    0x10105146
101050fc:	8b 40 7c             	mov    eax,DWORD PTR [eax+0x7c]
101050ff:	8b ce                	mov    ecx,esi
10105101:	6a 00                	push   0x0
10105103:	50                   	push   eax
10105104:	e8 77 00 00 00       	call   0x10105180
10105109:	eb 3b                	jmp    0x10105146
1010510b:	83 be d4 03 00 00 00 	cmp    DWORD PTR [esi+0x3d4],0x0
10105112:	75 32                	jne    0x10105146
10105114:	57                   	push   edi
10105115:	6a 00                	push   0x0
10105117:	c7 86 d4 03 00 00 01 	mov    DWORD PTR [esi+0x3d4],0x1
1010511e:	00 00 00 
10105121:	e8 4a f5 ff ff       	call   0x10104670
10105126:	8b f8                	mov    edi,eax
10105128:	85 ff                	test   edi,edi
1010512a:	74 19                	je     0x10105145
1010512c:	8b 17                	mov    edx,DWORD PTR [edi]
1010512e:	8b cf                	mov    ecx,edi
10105130:	ff 92 bc 00 00 00    	call   DWORD PTR [edx+0xbc]
10105136:	85 c0                	test   eax,eax
10105138:	74 0b                	je     0x10105145
1010513a:	8b 07                	mov    eax,DWORD PTR [edi]
1010513c:	8b cf                	mov    ecx,edi
1010513e:	56                   	push   esi
1010513f:	ff 90 54 02 00 00    	call   DWORD PTR [eax+0x254]
10105145:	5f                   	pop    edi
10105146:	6a 00                	push   0x0
10105148:	8d 8e 8c 01 00 00    	lea    ecx,[esi+0x18c]
1010514e:	e8 ed 25 f1 ff       	call   0x10017740
10105153:	8b 06                	mov    eax,DWORD PTR [esi]
10105155:	8b ce                	mov    ecx,esi
10105157:	ff 90 a8 01 00 00    	call   DWORD PTR [eax+0x1a8]
1010515d:	ff 75 0c             	push   DWORD PTR [ebp+0xc]
10105160:	8b ce                	mov    ecx,esi
10105162:	c7 86 80 00 00 00 00 	mov    DWORD PTR [esi+0x80],0x0
10105169:	00 00 00 
1010516c:	53                   	push   ebx
1010516d:	e8 be 51 f8 ff       	call   0x1008a330
10105172:	5e                   	pop    esi
10105173:	5b                   	pop    ebx
10105174:	5d                   	pop    ebp
10105175:	c2 08 00             	ret    0x8
