
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10009510 <.text+0x8510>:
10009510:	55                   	push   ebp
10009511:	8b ec                	mov    ebp,esp
10009513:	83 ec 18             	sub    esp,0x18
10009516:	a1 f4 ba 21 10       	mov    eax,ds:0x1021baf4
1000951b:	33 c5                	xor    eax,ebp
1000951d:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
10009520:	53                   	push   ebx
10009521:	8b 5d 08             	mov    ebx,DWORD PTR [ebp+0x8]
10009524:	8d 55 ec             	lea    edx,[ebp-0x14]
10009527:	6b c3 0d             	imul   eax,ebx,0xd
1000952a:	56                   	push   esi
1000952b:	57                   	push   edi
1000952c:	8b 7d 0c             	mov    edi,DWORD PTR [ebp+0xc]
1000952f:	8d b0 f0 0f 22 10    	lea    esi,[eax+0x10220ff0]
10009535:	8b ce                	mov    ecx,esi
10009537:	2b d6                	sub    edx,esi
10009539:	0f 1f 80 00 00 00 00 	nop    DWORD PTR [eax+0x0]
10009540:	8a 01                	mov    al,BYTE PTR [ecx]
10009542:	8d 49 01             	lea    ecx,[ecx+0x1]
10009545:	88 44 0a ff          	mov    BYTE PTR [edx+ecx*1-0x1],al
10009549:	84 c0                	test   al,al
1000954b:	75 f3                	jne    0x10009540
1000954d:	8a 83 f0 29 22 10    	mov    al,BYTE PTR [ebx+0x102229f0]
10009553:	88 45 eb             	mov    BYTE PTR [ebp-0x15],al
10009556:	6b c7 0d             	imul   eax,edi,0xd
10009559:	8d 90 f0 0f 22 10    	lea    edx,[eax+0x10220ff0]
1000955f:	8b ca                	mov    ecx,edx
10009561:	2b f2                	sub    esi,edx
10009563:	8a 01                	mov    al,BYTE PTR [ecx]
10009565:	8d 49 01             	lea    ecx,[ecx+0x1]
10009568:	88 44 0e ff          	mov    BYTE PTR [esi+ecx*1-0x1],al
1000956c:	84 c0                	test   al,al
1000956e:	75 f3                	jne    0x10009563
10009570:	8a 87 f0 29 22 10    	mov    al,BYTE PTR [edi+0x102229f0]
10009576:	88 83 f0 29 22 10    	mov    BYTE PTR [ebx+0x102229f0],al
1000957c:	8d 45 ec             	lea    eax,[ebp-0x14]
1000957f:	8b c8                	mov    ecx,eax
10009581:	2b d1                	sub    edx,ecx
10009583:	8a 08                	mov    cl,BYTE PTR [eax]
10009585:	8d 40 01             	lea    eax,[eax+0x1]
10009588:	88 4c 02 ff          	mov    BYTE PTR [edx+eax*1-0x1],cl
1000958c:	84 c9                	test   cl,cl
1000958e:	75 f3                	jne    0x10009583
10009590:	8a 45 eb             	mov    al,BYTE PTR [ebp-0x15]
10009593:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
10009596:	88 87 f0 29 22 10    	mov    BYTE PTR [edi+0x102229f0],al
1000959c:	33 cd                	xor    ecx,ebp
1000959e:	5f                   	pop    edi
1000959f:	5e                   	pop    esi
100095a0:	5b                   	pop    ebx
100095a1:	e8 0d 46 13 00       	call   0x1013dbb3
100095a6:	8b e5                	mov    esp,ebp
100095a8:	5d                   	pop    ebp
100095a9:	c3                   	ret
