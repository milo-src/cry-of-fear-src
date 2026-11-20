
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100f91b0 <.text+0xf81b0>:
100f91b0:	55                   	push   ebp
100f91b1:	8b ec                	mov    ebp,esp
100f91b3:	83 ec 0c             	sub    esp,0xc
100f91b6:	56                   	push   esi
100f91b7:	8b f1                	mov    esi,ecx
100f91b9:	8b 0d e4 2e 22 10    	mov    ecx,DWORD PTR ds:0x10222ee4
100f91bf:	85 c9                	test   ecx,ecx
100f91c1:	74 71                	je     0x100f9234
100f91c3:	8b 01                	mov    eax,DWORD PTR [ecx]
100f91c5:	ff 50 20             	call   DWORD PTR [eax+0x20]
100f91c8:	85 c0                	test   eax,eax
100f91ca:	74 68                	je     0x100f9234
100f91cc:	f3 0f 10 45 08       	movss  xmm0,DWORD PTR [ebp+0x8]
100f91d1:	8d 45 f4             	lea    eax,[ebp-0xc]
100f91d4:	6a 00                	push   0x0
100f91d6:	6a 00                	push   0x0
100f91d8:	6a 00                	push   0x0
100f91da:	6a 00                	push   0x0
100f91dc:	83 ec 08             	sub    esp,0x8
100f91df:	f3 0f 11 45 f4       	movss  DWORD PTR [ebp-0xc],xmm0
100f91e4:	f3 0f 10 45 0c       	movss  xmm0,DWORD PTR [ebp+0xc]
100f91e9:	f3 0f 11 45 f8       	movss  DWORD PTR [ebp-0x8],xmm0
100f91ee:	f3 0f 10 45 10       	movss  xmm0,DWORD PTR [ebp+0x10]
100f91f3:	c7 44 24 04 00 00 00 	mov    DWORD PTR [esp+0x4],0x0
100f91fa:	00 
100f91fb:	c7 04 24 00 00 00 00 	mov    DWORD PTR [esp],0x0
100f9202:	50                   	push   eax
100f9203:	50                   	push   eax
100f9204:	0f b7 05 44 1f 23 10 	movzx  eax,WORD PTR ds:0x10231f44
100f920b:	51                   	push   ecx
100f920c:	c7 04 24 00 00 00 00 	mov    DWORD PTR [esp],0x0
100f9213:	50                   	push   eax
100f9214:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100f9217:	f3 0f 11 45 fc       	movss  DWORD PTR [ebp-0x4],xmm0
100f921c:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
100f9222:	6a 10                	push   0x10
100f9224:	ff 15 34 31 22 10    	call   DWORD PTR ds:0x10223134
100f922a:	83 c4 30             	add    esp,0x30
100f922d:	5e                   	pop    esi
100f922e:	8b e5                	mov    esp,ebp
100f9230:	5d                   	pop    ebp
100f9231:	c2 0c 00             	ret    0xc
100f9234:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100f9237:	f3 0f 10 15 ec 1e 1a 	movss  xmm2,DWORD PTR ds:0x101a1eec
100f923e:	10 
100f923f:	f3 0f 10 4d 08       	movss  xmm1,DWORD PTR [ebp+0x8]
100f9244:	f3 0f 59 ca          	mulss  xmm1,xmm2
100f9248:	5e                   	pop    esi
100f9249:	f3 0f 10 80 80 02 00 	movss  xmm0,DWORD PTR [eax+0x280]
100f9250:	00 
100f9251:	f3 0f 5c c1          	subss  xmm0,xmm1
100f9255:	f3 0f 11 80 80 02 00 	movss  DWORD PTR [eax+0x280],xmm0
100f925c:	00 
100f925d:	f3 0f 10 45 0c       	movss  xmm0,DWORD PTR [ebp+0xc]
100f9262:	f3 0f 59 c2          	mulss  xmm0,xmm2
100f9266:	f3 0f 58 80 84 02 00 	addss  xmm0,DWORD PTR [eax+0x284]
100f926d:	00 
100f926e:	f3 0f 11 80 84 02 00 	movss  DWORD PTR [eax+0x284],xmm0
100f9275:	00 
100f9276:	f3 0f 10 45 10       	movss  xmm0,DWORD PTR [ebp+0x10]
100f927b:	f3 0f 59 c2          	mulss  xmm0,xmm2
100f927f:	f3 0f 58 80 88 02 00 	addss  xmm0,DWORD PTR [eax+0x288]
100f9286:	00 
100f9287:	f3 0f 11 80 88 02 00 	movss  DWORD PTR [eax+0x288],xmm0
100f928e:	00 
100f928f:	8b e5                	mov    esp,ebp
100f9291:	5d                   	pop    ebp
100f9292:	c2 0c 00             	ret    0xc
