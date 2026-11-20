
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

101182b0 <.text+0x1172b0>:
101182b0:	55                   	push   ebp
101182b1:	8b ec                	mov    ebp,esp
101182b3:	83 ec 30             	sub    esp,0x30
101182b6:	a1 f4 ba 21 10       	mov    eax,ds:0x1021baf4
101182bb:	33 c5                	xor    eax,ebp
101182bd:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
101182c0:	53                   	push   ebx
101182c1:	8b 5d 08             	mov    ebx,DWORD PTR [ebp+0x8]
101182c4:	56                   	push   esi
101182c5:	8b 75 10             	mov    esi,DWORD PTR [ebp+0x10]
101182c8:	57                   	push   edi
101182c9:	8b 7d 0c             	mov    edi,DWORD PTR [ebp+0xc]
101182cc:	f3 0f 10 07          	movss  xmm0,DWORD PTR [edi]
101182d0:	f3 0f 11 45 d0       	movss  DWORD PTR [ebp-0x30],xmm0
101182d5:	f3 0f 10 47 04       	movss  xmm0,DWORD PTR [edi+0x4]
101182da:	f3 0f 11 45 d4       	movss  DWORD PTR [ebp-0x2c],xmm0
101182df:	f3 0f 10 47 08       	movss  xmm0,DWORD PTR [edi+0x8]
101182e4:	f3 0f 11 45 d8       	movss  DWORD PTR [ebp-0x28],xmm0
101182e9:	85 f6                	test   esi,esi
101182eb:	74 61                	je     0x1011834e
101182ed:	80 3e 21             	cmp    BYTE PTR [esi],0x21
101182f0:	75 5c                	jne    0x1011834e
101182f2:	8d 45 dc             	lea    eax,[ebp-0x24]
101182f5:	50                   	push   eax
101182f6:	56                   	push   esi
101182f7:	e8 04 60 fe ff       	call   0x100fe300
101182fc:	83 c4 08             	add    esp,0x8
101182ff:	85 c0                	test   eax,eax
10118301:	78 30                	js     0x10118333
10118303:	ff 75 20             	push   DWORD PTR [ebp+0x20]
10118306:	f3 0f 10 45 18       	movss  xmm0,DWORD PTR [ebp+0x18]
1011830b:	8d 45 dc             	lea    eax,[ebp-0x24]
1011830e:	ff 75 1c             	push   DWORD PTR [ebp+0x1c]
10118311:	83 ec 08             	sub    esp,0x8
10118314:	f3 0f 11 44 24 04    	movss  DWORD PTR [esp+0x4],xmm0
1011831a:	f3 0f 10 45 14       	movss  xmm0,DWORD PTR [ebp+0x14]
1011831f:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
10118324:	50                   	push   eax
10118325:	8d 45 d0             	lea    eax,[ebp-0x30]
10118328:	50                   	push   eax
10118329:	53                   	push   ebx
1011832a:	ff 15 c0 2f 22 10    	call   DWORD PTR ds:0x10222fc0
10118330:	83 c4 1c             	add    esp,0x1c
10118333:	57                   	push   edi
10118334:	56                   	push   esi
10118335:	e8 e6 1e 00 00       	call   0x1011a220
1011833a:	83 c4 08             	add    esp,0x8
1011833d:	5f                   	pop    edi
1011833e:	5e                   	pop    esi
1011833f:	5b                   	pop    ebx
10118340:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
10118343:	33 cd                	xor    ecx,ebp
10118345:	e8 69 58 02 00       	call   0x1013dbb3
1011834a:	8b e5                	mov    esp,ebp
1011834c:	5d                   	pop    ebp
1011834d:	c3                   	ret
1011834e:	ff 75 20             	push   DWORD PTR [ebp+0x20]
10118351:	f3 0f 10 45 18       	movss  xmm0,DWORD PTR [ebp+0x18]
10118356:	8d 45 d0             	lea    eax,[ebp-0x30]
10118359:	ff 75 1c             	push   DWORD PTR [ebp+0x1c]
1011835c:	83 ec 08             	sub    esp,0x8
1011835f:	f3 0f 11 44 24 04    	movss  DWORD PTR [esp+0x4],xmm0
10118365:	f3 0f 10 45 14       	movss  xmm0,DWORD PTR [ebp+0x14]
1011836a:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
1011836f:	56                   	push   esi
10118370:	50                   	push   eax
10118371:	53                   	push   ebx
10118372:	ff 15 c0 2f 22 10    	call   DWORD PTR ds:0x10222fc0
10118378:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
1011837b:	83 c4 1c             	add    esp,0x1c
1011837e:	33 cd                	xor    ecx,ebp
10118380:	5f                   	pop    edi
10118381:	5e                   	pop    esi
10118382:	5b                   	pop    ebx
10118383:	e8 2b 58 02 00       	call   0x1013dbb3
10118388:	8b e5                	mov    esp,ebp
1011838a:	5d                   	pop    ebp
1011838b:	c3                   	ret
