
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10013090 <.text+0x12090>:
10013090:	55                   	push   ebp
10013091:	8b ec                	mov    ebp,esp
10013093:	56                   	push   esi
10013094:	8b f1                	mov    esi,ecx
10013096:	8b 86 00 01 00 00    	mov    eax,DWORD PTR [esi+0x100]
1001309c:	83 f8 02             	cmp    eax,0x2
1001309f:	0f 84 67 01 00 00    	je     0x1001320c
100130a5:	83 f8 03             	cmp    eax,0x3
100130a8:	0f 84 5e 01 00 00    	je     0x1001320c
100130ae:	57                   	push   edi
100130af:	8b 7d 08             	mov    edi,DWORD PTR [ebp+0x8]
100130b2:	8d 8e e4 00 00 00    	lea    ecx,[esi+0xe4]
100130b8:	57                   	push   edi
100130b9:	e8 82 46 00 00       	call   0x10017740
100130be:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100130c3:	f3 0f 10 86 84 01 00 	movss  xmm0,DWORD PTR [esi+0x184]
100130ca:	00 
100130cb:	f3 0f 10 08          	movss  xmm1,DWORD PTR [eax]
100130cf:	0f 2f c1             	comiss xmm0,xmm1
100130d2:	0f 87 33 01 00 00    	ja     0x1001320b
100130d8:	f3 0f 10 86 88 01 00 	movss  xmm0,DWORD PTR [esi+0x188]
100130df:	00 
100130e0:	0f 2f c1             	comiss xmm0,xmm1
100130e3:	0f 87 22 01 00 00    	ja     0x1001320b
100130e9:	8b 07                	mov    eax,DWORD PTR [edi]
100130eb:	8b cf                	mov    ecx,edi
100130ed:	ff 90 d0 00 00 00    	call   DWORD PTR [eax+0xd0]
100130f3:	85 c0                	test   eax,eax
100130f5:	0f 84 a6 00 00 00    	je     0x100131a1
100130fb:	83 be 8c 01 00 00 00 	cmp    DWORD PTR [esi+0x18c],0x0
10013102:	0f 84 99 00 00 00    	je     0x100131a1
10013108:	80 be 80 01 00 00 00 	cmp    BYTE PTR [esi+0x180],0x0
1001310f:	0f 84 8c 00 00 00    	je     0x100131a1
10013115:	8b 8e 90 01 00 00    	mov    ecx,DWORD PTR [esi+0x190]
1001311b:	85 c9                	test   ecx,ecx
1001311d:	74 1b                	je     0x1001313a
1001311f:	a1 88 31 22 10       	mov    eax,ds:0x10223188
10013124:	6a 00                	push   0x0
10013126:	6a 05                	push   0x5
10013128:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
1001312e:	03 c1                	add    eax,ecx
10013130:	50                   	push   eax
10013131:	57                   	push   edi
10013132:	e8 d9 66 10 00       	call   0x10119810
10013137:	83 c4 10             	add    esp,0x10
1001313a:	8b 8e 94 01 00 00    	mov    ecx,DWORD PTR [esi+0x194]
10013140:	85 c9                	test   ecx,ecx
10013142:	74 37                	je     0x1001317b
10013144:	a1 88 31 22 10       	mov    eax,ds:0x10223188
10013149:	6a 64                	push   0x64
1001314b:	6a 00                	push   0x0
1001314d:	83 ec 08             	sub    esp,0x8
10013150:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
10013156:	03 c1                	add    eax,ecx
10013158:	c7 44 24 04 cd cc 4c 	mov    DWORD PTR [esp+0x4],0x3f4ccccd
1001315f:	3f 
10013160:	c7 04 24 00 00 80 3f 	mov    DWORD PTR [esp],0x3f800000
10013167:	50                   	push   eax
10013168:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
1001316b:	6a 00                	push   0x0
1001316d:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
10013173:	e8 78 98 0e 00       	call   0x100fc9f0
10013178:	83 c4 1c             	add    esp,0x1c
1001317b:	a1 88 31 22 10       	mov    eax,ds:0x10223188
10013180:	5f                   	pop    edi
10013181:	f3 0f 10 00          	movss  xmm0,DWORD PTR [eax]
10013185:	0f 5a c0             	cvtps2pd xmm0,xmm0
10013188:	f2 0f 58 05 60 1e 1a 	addsd  xmm0,QWORD PTR ds:0x101a1e60
1001318f:	10 
10013190:	66 0f 5a c0          	cvtpd2ps xmm0,xmm0
10013194:	f3 0f 11 86 88 01 00 	movss  DWORD PTR [esi+0x188],xmm0
1001319b:	00 
1001319c:	5e                   	pop    esi
1001319d:	5d                   	pop    ebp
1001319e:	c2 10 00             	ret    0x10
100131a1:	83 be 00 01 00 00 00 	cmp    DWORD PTR [esi+0x100],0x0
100131a8:	75 5a                	jne    0x10013204
100131aa:	83 be a8 01 00 00 00 	cmp    DWORD PTR [esi+0x1a8],0x0
100131b1:	75 58                	jne    0x1001320b
100131b3:	8b 56 04             	mov    edx,DWORD PTR [esi+0x4]
100131b6:	f6 82 a4 01 00 00 20 	test   BYTE PTR [edx+0x1a4],0x20
100131bd:	74 4c                	je     0x1001320b
100131bf:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100131c4:	8b 8a ec 01 00 00    	mov    ecx,DWORD PTR [edx+0x1ec]
100131ca:	6a 64                	push   0x64
100131cc:	6a 00                	push   0x0
100131ce:	03 88 98 00 00 00    	add    ecx,DWORD PTR [eax+0x98]
100131d4:	83 ec 08             	sub    esp,0x8
100131d7:	c7 44 24 04 cd cc 4c 	mov    DWORD PTR [esp+0x4],0x3f4ccccd
100131de:	3f 
100131df:	c7 04 24 00 00 80 3f 	mov    DWORD PTR [esp],0x3f800000
100131e6:	51                   	push   ecx
100131e7:	6a 02                	push   0x2
100131e9:	ff b2 0c 02 00 00    	push   DWORD PTR [edx+0x20c]
100131ef:	e8 fc 97 0e 00       	call   0x100fc9f0
100131f4:	83 c4 1c             	add    esp,0x1c
100131f7:	8b ce                	mov    ecx,esi
100131f9:	e8 52 fb ff ff       	call   0x10012d50
100131fe:	5f                   	pop    edi
100131ff:	5e                   	pop    esi
10013200:	5d                   	pop    ebp
10013201:	c2 10 00             	ret    0x10
10013204:	8b ce                	mov    ecx,esi
10013206:	e8 75 f8 ff ff       	call   0x10012a80
1001320b:	5f                   	pop    edi
1001320c:	5e                   	pop    esi
1001320d:	5d                   	pop    ebp
1001320e:	c2 10 00             	ret    0x10
