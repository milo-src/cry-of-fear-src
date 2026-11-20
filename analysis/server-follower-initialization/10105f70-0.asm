
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10105f70 <.text+0x104f70>:
10105f70:	55                   	push   ebp
10105f71:	8b ec                	mov    ebp,esp
10105f73:	83 ec 44             	sub    esp,0x44
10105f76:	a1 f4 ba 21 10       	mov    eax,ds:0x1021baf4
10105f7b:	33 c5                	xor    eax,ebp
10105f7d:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
10105f80:	53                   	push   ebx
10105f81:	8b d9                	mov    ebx,ecx
10105f83:	c7 05 78 0d 23 10 00 	mov    DWORD PTR ds:0x10230d78,0x0
10105f8a:	00 00 00 
10105f8d:	8b 93 d0 03 00 00    	mov    edx,DWORD PTR [ebx+0x3d0]
10105f93:	85 d2                	test   edx,edx
10105f95:	0f 84 6d 04 00 00    	je     0x10106408
10105f9b:	a1 88 31 22 10       	mov    eax,ds:0x10223188
10105fa0:	8b 88 98 00 00 00    	mov    ecx,DWORD PTR [eax+0x98]
10105fa6:	03 ca                	add    ecx,edx
10105fa8:	8d 55 bc             	lea    edx,[ebp-0x44]
10105fab:	0f 1f 44 00 00       	nop    DWORD PTR [eax+eax*1+0x0]
10105fb0:	8a 01                	mov    al,BYTE PTR [ecx]
10105fb2:	8d 49 01             	lea    ecx,[ecx+0x1]
10105fb5:	88 02                	mov    BYTE PTR [edx],al
10105fb7:	8d 52 01             	lea    edx,[edx+0x1]
10105fba:	84 c0                	test   al,al
10105fbc:	75 f2                	jne    0x10105fb0
10105fbe:	56                   	push   esi
10105fbf:	57                   	push   edi
10105fc0:	8d 7d bc             	lea    edi,[ebp-0x44]
10105fc3:	4f                   	dec    edi
10105fc4:	8a 47 01             	mov    al,BYTE PTR [edi+0x1]
10105fc7:	8d 7f 01             	lea    edi,[edi+0x1]
10105fca:	84 c0                	test   al,al
10105fcc:	75 f6                	jne    0x10105fc4
10105fce:	66 a1 48 f9 1d 10    	mov    ax,ds:0x101df948
10105fd4:	8d 75 bc             	lea    esi,[ebp-0x44]
10105fd7:	66 89 07             	mov    WORD PTR [edi],ax
10105fda:	8d 4e 01             	lea    ecx,[esi+0x1]
10105fdd:	0f 1f 00             	nop    DWORD PTR [eax]
10105fe0:	8a 06                	mov    al,BYTE PTR [esi]
10105fe2:	46                   	inc    esi
10105fe3:	84 c0                	test   al,al
10105fe5:	75 f9                	jne    0x10105fe0
10105fe7:	a1 4c f9 1d 10       	mov    eax,ds:0x101df94c
10105fec:	2b f1                	sub    esi,ecx
10105fee:	89 44 35 bc          	mov    DWORD PTR [ebp+esi*1-0x44],eax
10105ff2:	0f b7 05 50 f9 1d 10 	movzx  eax,WORD PTR ds:0x101df950
10105ff9:	66 89 44 35 c0       	mov    WORD PTR [ebp+esi*1-0x40],ax
10105ffe:	0f b6 05 52 f9 1d 10 	movzx  eax,BYTE PTR ds:0x101df952
10106005:	88 44 35 c2          	mov    BYTE PTR [ebp+esi*1-0x3e],al
10106009:	8d 45 bc             	lea    eax,[ebp-0x44]
1010600c:	50                   	push   eax
1010600d:	ff 15 54 30 22 10    	call   DWORD PTR ds:0x10223054
10106013:	8b 0d 88 31 22 10    	mov    ecx,DWORD PTR ds:0x10223188
10106019:	03 81 98 00 00 00    	add    eax,DWORD PTR [ecx+0x98]
1010601f:	89 83 74 03 00 00    	mov    DWORD PTR [ebx+0x374],eax
10106025:	f3 0f 7e 05 54 f9 1d 	movq   xmm0,QWORD PTR ds:0x101df954
1010602c:	10 
1010602d:	0f b6 05 5c f9 1d 10 	movzx  eax,BYTE PTR ds:0x101df95c
10106034:	66 0f d6 44 35 bc    	movq   QWORD PTR [ebp+esi*1-0x44],xmm0
1010603a:	88 44 35 c4          	mov    BYTE PTR [ebp+esi*1-0x3c],al
1010603e:	8d 45 bc             	lea    eax,[ebp-0x44]
10106041:	50                   	push   eax
10106042:	ff 15 54 30 22 10    	call   DWORD PTR ds:0x10223054
10106048:	8b 0d 88 31 22 10    	mov    ecx,DWORD PTR ds:0x10223188
1010604e:	03 81 98 00 00 00    	add    eax,DWORD PTR [ecx+0x98]
10106054:	89 83 78 03 00 00    	mov    DWORD PTR [ebx+0x378],eax
1010605a:	a1 60 f9 1d 10       	mov    eax,ds:0x101df960
1010605f:	89 44 35 bc          	mov    DWORD PTR [ebp+esi*1-0x44],eax
10106063:	0f b6 05 64 f9 1d 10 	movzx  eax,BYTE PTR ds:0x101df964
1010606a:	88 44 35 c0          	mov    BYTE PTR [ebp+esi*1-0x40],al
1010606e:	8d 45 bc             	lea    eax,[ebp-0x44]
10106071:	50                   	push   eax
10106072:	ff 15 54 30 22 10    	call   DWORD PTR ds:0x10223054
10106078:	8b 0d 88 31 22 10    	mov    ecx,DWORD PTR ds:0x10223188
1010607e:	03 81 98 00 00 00    	add    eax,DWORD PTR [ecx+0x98]
10106084:	89 83 7c 03 00 00    	mov    DWORD PTR [ebx+0x37c],eax
1010608a:	a1 68 f9 1d 10       	mov    eax,ds:0x101df968
1010608f:	89 44 35 bc          	mov    DWORD PTR [ebp+esi*1-0x44],eax
10106093:	0f b7 05 6c f9 1d 10 	movzx  eax,WORD PTR ds:0x101df96c
1010609a:	66 89 44 35 c0       	mov    WORD PTR [ebp+esi*1-0x40],ax
1010609f:	8d 45 bc             	lea    eax,[ebp-0x44]
101060a2:	50                   	push   eax
101060a3:	ff 15 54 30 22 10    	call   DWORD PTR ds:0x10223054
101060a9:	8b 0d 88 31 22 10    	mov    ecx,DWORD PTR ds:0x10223188
101060af:	83 c4 10             	add    esp,0x10
101060b2:	03 81 98 00 00 00    	add    eax,DWORD PTR [ecx+0x98]
101060b8:	89 83 80 03 00 00    	mov    DWORD PTR [ebx+0x380],eax
101060be:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
101060c1:	f7 80 a4 01 00 00 00 	test   DWORD PTR [eax+0x1a4],0x100
101060c8:	01 00 00 
101060cb:	74 12                	je     0x101060df
101060cd:	c7 44 35 bc 50 46 4f 	mov    DWORD PTR [ebp+esi*1-0x44],0x4c4f4650
101060d4:	4c 
101060d5:	c7 44 35 c0 4c 4f 57 	mov    DWORD PTR [ebp+esi*1-0x40],0x574f4c
101060dc:	00 
101060dd:	eb 14                	jmp    0x101060f3
101060df:	66 a1 70 f9 1d 10    	mov    ax,ds:0x101df970
101060e5:	66 89 44 35 bc       	mov    WORD PTR [ebp+esi*1-0x44],ax
101060ea:	a0 72 f9 1d 10       	mov    al,ds:0x101df972
101060ef:	88 44 35 be          	mov    BYTE PTR [ebp+esi*1-0x42],al
101060f3:	8d 45 bc             	lea    eax,[ebp-0x44]
101060f6:	50                   	push   eax
101060f7:	ff 15 54 30 22 10    	call   DWORD PTR ds:0x10223054
101060fd:	8b 0d 88 31 22 10    	mov    ecx,DWORD PTR ds:0x10223188
10106103:	83 c4 04             	add    esp,0x4
10106106:	03 81 98 00 00 00    	add    eax,DWORD PTR [ecx+0x98]
1010610c:	89 83 84 03 00 00    	mov    DWORD PTR [ebx+0x384],eax
10106112:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
10106115:	f7 80 a4 01 00 00 00 	test   DWORD PTR [eax+0x1a4],0x100
1010611c:	01 00 00 
1010611f:	74 16                	je     0x10106137
10106121:	a1 74 f9 1d 10       	mov    eax,ds:0x101df974
10106126:	89 44 35 bc          	mov    DWORD PTR [ebp+esi*1-0x44],eax
1010612a:	66 a1 78 f9 1d 10    	mov    ax,ds:0x101df978
10106130:	66 89 44 35 c0       	mov    WORD PTR [ebp+esi*1-0x40],ax
10106135:	eb 12                	jmp    0x10106149
10106137:	a1 7c f9 1d 10       	mov    eax,ds:0x101df97c
1010613c:	89 44 35 bc          	mov    DWORD PTR [ebp+esi*1-0x44],eax
10106140:	a0 80 f9 1d 10       	mov    al,ds:0x101df980
10106145:	88 44 35 c0          	mov    BYTE PTR [ebp+esi*1-0x40],al
10106149:	8d 45 bc             	lea    eax,[ebp-0x44]
1010614c:	50                   	push   eax
1010614d:	ff 15 54 30 22 10    	call   DWORD PTR ds:0x10223054
10106153:	8b 0d 88 31 22 10    	mov    ecx,DWORD PTR ds:0x10223188
10106159:	83 c4 04             	add    esp,0x4
1010615c:	03 81 98 00 00 00    	add    eax,DWORD PTR [ecx+0x98]
10106162:	89 83 88 03 00 00    	mov    DWORD PTR [ebx+0x388],eax
10106168:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
1010616b:	f7 80 a4 01 00 00 00 	test   DWORD PTR [eax+0x1a4],0x100
10106172:	01 00 00 
10106175:	74 0a                	je     0x10106181
10106177:	c7 44 35 bc 50 4f 4b 	mov    DWORD PTR [ebp+esi*1-0x44],0x4b4f50
1010617e:	00 
1010617f:	eb 14                	jmp    0x10106195
10106181:	a1 84 f9 1d 10       	mov    eax,ds:0x101df984
10106186:	89 44 35 bc          	mov    DWORD PTR [ebp+esi*1-0x44],eax
1010618a:	66 a1 88 f9 1d 10    	mov    ax,ds:0x101df988
10106190:	66 89 44 35 c0       	mov    WORD PTR [ebp+esi*1-0x40],ax
10106195:	8d 45 bc             	lea    eax,[ebp-0x44]
10106198:	50                   	push   eax
10106199:	ff 15 54 30 22 10    	call   DWORD PTR ds:0x10223054
1010619f:	8b 0d 88 31 22 10    	mov    ecx,DWORD PTR ds:0x10223188
101061a5:	03 81 98 00 00 00    	add    eax,DWORD PTR [ecx+0x98]
101061ab:	89 83 8c 03 00 00    	mov    DWORD PTR [ebx+0x38c],eax
101061b1:	a1 8c f9 1d 10       	mov    eax,ds:0x101df98c
101061b6:	89 44 35 bc          	mov    DWORD PTR [ebp+esi*1-0x44],eax
101061ba:	0f b6 05 90 f9 1d 10 	movzx  eax,BYTE PTR ds:0x101df990
101061c1:	88 44 35 c0          	mov    BYTE PTR [ebp+esi*1-0x40],al
101061c5:	8d 45 bc             	lea    eax,[ebp-0x44]
101061c8:	50                   	push   eax
101061c9:	ff 15 54 30 22 10    	call   DWORD PTR ds:0x10223054
101061cf:	8b 0d 88 31 22 10    	mov    ecx,DWORD PTR ds:0x10223188
101061d5:	03 81 98 00 00 00    	add    eax,DWORD PTR [ecx+0x98]
101061db:	89 83 90 03 00 00    	mov    DWORD PTR [ebx+0x390],eax
101061e1:	8d 45 bc             	lea    eax,[ebp-0x44]
101061e4:	50                   	push   eax
101061e5:	c7 44 35 bc 4e 4f 53 	mov    DWORD PTR [ebp+esi*1-0x44],0x48534f4e
101061ec:	48 
101061ed:	c7 44 35 c0 4f 4f 54 	mov    DWORD PTR [ebp+esi*1-0x40],0x544f4f
101061f4:	00 
101061f5:	ff 15 54 30 22 10    	call   DWORD PTR ds:0x10223054
101061fb:	8b 0d 88 31 22 10    	mov    ecx,DWORD PTR ds:0x10223188
10106201:	03 81 98 00 00 00    	add    eax,DWORD PTR [ecx+0x98]
10106207:	89 83 94 03 00 00    	mov    DWORD PTR [ebx+0x394],eax
1010620d:	a1 94 f9 1d 10       	mov    eax,ds:0x101df994
10106212:	89 44 35 bc          	mov    DWORD PTR [ebp+esi*1-0x44],eax
10106216:	0f b7 05 98 f9 1d 10 	movzx  eax,WORD PTR ds:0x101df998
1010621d:	66 89 44 35 c0       	mov    WORD PTR [ebp+esi*1-0x40],ax
10106222:	8d 45 bc             	lea    eax,[ebp-0x44]
10106225:	50                   	push   eax
10106226:	ff 15 54 30 22 10    	call   DWORD PTR ds:0x10223054
1010622c:	8b 0d 88 31 22 10    	mov    ecx,DWORD PTR ds:0x10223188
10106232:	03 81 98 00 00 00    	add    eax,DWORD PTR [ecx+0x98]
10106238:	89 83 98 03 00 00    	mov    DWORD PTR [ebx+0x398],eax
1010623e:	8d 45 bc             	lea    eax,[ebp-0x44]
10106241:	50                   	push   eax
10106242:	c7 44 35 bc 50 4c 48 	mov    DWORD PTR [ebp+esi*1-0x44],0x55484c50
10106249:	55 
1010624a:	c7 44 35 c0 52 54 31 	mov    DWORD PTR [ebp+esi*1-0x40],0x315452
10106251:	00 
10106252:	ff 15 54 30 22 10    	call   DWORD PTR ds:0x10223054
10106258:	8b 0d 88 31 22 10    	mov    ecx,DWORD PTR ds:0x10223188
1010625e:	03 81 98 00 00 00    	add    eax,DWORD PTR [ecx+0x98]
10106264:	89 83 a8 03 00 00    	mov    DWORD PTR [ebx+0x3a8],eax
1010626a:	8d 45 bc             	lea    eax,[ebp-0x44]
1010626d:	50                   	push   eax
1010626e:	c7 44 35 bc 50 4c 48 	mov    DWORD PTR [ebp+esi*1-0x44],0x55484c50
10106275:	55 
10106276:	c7 44 35 c0 52 54 32 	mov    DWORD PTR [ebp+esi*1-0x40],0x325452
1010627d:	00 
1010627e:	ff 15 54 30 22 10    	call   DWORD PTR ds:0x10223054
10106284:	8b 0d 88 31 22 10    	mov    ecx,DWORD PTR ds:0x10223188
1010628a:	03 81 98 00 00 00    	add    eax,DWORD PTR [ecx+0x98]
10106290:	89 83 ac 03 00 00    	mov    DWORD PTR [ebx+0x3ac],eax
10106296:	8d 45 bc             	lea    eax,[ebp-0x44]
10106299:	50                   	push   eax
1010629a:	c7 44 35 bc 50 4c 48 	mov    DWORD PTR [ebp+esi*1-0x44],0x55484c50
101062a1:	55 
101062a2:	c7 44 35 c0 52 54 33 	mov    DWORD PTR [ebp+esi*1-0x40],0x335452
101062a9:	00 
101062aa:	ff 15 54 30 22 10    	call   DWORD PTR ds:0x10223054
101062b0:	8b 0d 88 31 22 10    	mov    ecx,DWORD PTR ds:0x10223188
101062b6:	03 81 98 00 00 00    	add    eax,DWORD PTR [ecx+0x98]
101062bc:	89 83 b0 03 00 00    	mov    DWORD PTR [ebx+0x3b0],eax
101062c2:	a1 9c f9 1d 10       	mov    eax,ds:0x101df99c
101062c7:	89 44 35 bc          	mov    DWORD PTR [ebp+esi*1-0x44],eax
101062cb:	0f b7 05 a0 f9 1d 10 	movzx  eax,WORD PTR ds:0x101df9a0
101062d2:	66 89 44 35 c0       	mov    WORD PTR [ebp+esi*1-0x40],ax
101062d7:	0f b6 05 a2 f9 1d 10 	movzx  eax,BYTE PTR ds:0x101df9a2
101062de:	88 44 35 c2          	mov    BYTE PTR [ebp+esi*1-0x3e],al
101062e2:	8d 45 bc             	lea    eax,[ebp-0x44]
101062e5:	50                   	push   eax
101062e6:	ff 15 54 30 22 10    	call   DWORD PTR ds:0x10223054
101062ec:	8b 0d 88 31 22 10    	mov    ecx,DWORD PTR ds:0x10223188
101062f2:	03 81 98 00 00 00    	add    eax,DWORD PTR [ecx+0x98]
101062f8:	89 83 9c 03 00 00    	mov    DWORD PTR [ebx+0x39c],eax
101062fe:	a1 a4 f9 1d 10       	mov    eax,ds:0x101df9a4
10106303:	89 44 35 bc          	mov    DWORD PTR [ebp+esi*1-0x44],eax
10106307:	0f b7 05 a8 f9 1d 10 	movzx  eax,WORD PTR ds:0x101df9a8
1010630e:	66 89 44 35 c0       	mov    WORD PTR [ebp+esi*1-0x40],ax
10106313:	8d 45 bc             	lea    eax,[ebp-0x44]
10106316:	50                   	push   eax
10106317:	ff 15 54 30 22 10    	call   DWORD PTR ds:0x10223054
1010631d:	8b 0d 88 31 22 10    	mov    ecx,DWORD PTR ds:0x10223188
10106323:	03 81 98 00 00 00    	add    eax,DWORD PTR [ecx+0x98]
10106329:	89 83 a0 03 00 00    	mov    DWORD PTR [ebx+0x3a0],eax
1010632f:	f3 0f 7e 05 ac f9 1d 	movq   xmm0,QWORD PTR ds:0x101df9ac
10106336:	10 
10106337:	0f b7 05 b4 f9 1d 10 	movzx  eax,WORD PTR ds:0x101df9b4
1010633e:	66 0f d6 44 35 bc    	movq   QWORD PTR [ebp+esi*1-0x44],xmm0
10106344:	66 89 44 35 c4       	mov    WORD PTR [ebp+esi*1-0x3c],ax
10106349:	8d 45 bc             	lea    eax,[ebp-0x44]
1010634c:	50                   	push   eax
1010634d:	ff 15 54 30 22 10    	call   DWORD PTR ds:0x10223054
10106353:	8b 0d 88 31 22 10    	mov    ecx,DWORD PTR ds:0x10223188
10106359:	03 81 98 00 00 00    	add    eax,DWORD PTR [ecx+0x98]
1010635f:	89 83 a4 03 00 00    	mov    DWORD PTR [ebx+0x3a4],eax
10106365:	a1 b8 f9 1d 10       	mov    eax,ds:0x101df9b8
1010636a:	89 44 35 bc          	mov    DWORD PTR [ebp+esi*1-0x44],eax
1010636e:	0f b7 05 bc f9 1d 10 	movzx  eax,WORD PTR ds:0x101df9bc
10106375:	66 89 44 35 c0       	mov    WORD PTR [ebp+esi*1-0x40],ax
1010637a:	8d 45 bc             	lea    eax,[ebp-0x44]
1010637d:	50                   	push   eax
1010637e:	ff 15 54 30 22 10    	call   DWORD PTR ds:0x10223054
10106384:	8b 0d 88 31 22 10    	mov    ecx,DWORD PTR ds:0x10223188
1010638a:	03 81 98 00 00 00    	add    eax,DWORD PTR [ecx+0x98]
10106390:	89 83 b4 03 00 00    	mov    DWORD PTR [ebx+0x3b4],eax
10106396:	a1 c0 f9 1d 10       	mov    eax,ds:0x101df9c0
1010639b:	89 44 35 bc          	mov    DWORD PTR [ebp+esi*1-0x44],eax
1010639f:	0f b7 05 c4 f9 1d 10 	movzx  eax,WORD PTR ds:0x101df9c4
101063a6:	66 89 44 35 c0       	mov    WORD PTR [ebp+esi*1-0x40],ax
101063ab:	8d 45 bc             	lea    eax,[ebp-0x44]
101063ae:	50                   	push   eax
101063af:	ff 15 54 30 22 10    	call   DWORD PTR ds:0x10223054
101063b5:	8b 0d 88 31 22 10    	mov    ecx,DWORD PTR ds:0x10223188
101063bb:	03 81 98 00 00 00    	add    eax,DWORD PTR [ecx+0x98]
101063c1:	89 83 b8 03 00 00    	mov    DWORD PTR [ebx+0x3b8],eax
101063c7:	a1 c8 f9 1d 10       	mov    eax,ds:0x101df9c8
101063cc:	89 44 35 bc          	mov    DWORD PTR [ebp+esi*1-0x44],eax
101063d0:	0f b7 05 cc f9 1d 10 	movzx  eax,WORD PTR ds:0x101df9cc
101063d7:	66 89 44 35 c0       	mov    WORD PTR [ebp+esi*1-0x40],ax
101063dc:	0f b6 05 ce f9 1d 10 	movzx  eax,BYTE PTR ds:0x101df9ce
101063e3:	88 44 35 c2          	mov    BYTE PTR [ebp+esi*1-0x3e],al
101063e7:	8d 45 bc             	lea    eax,[ebp-0x44]
101063ea:	50                   	push   eax
101063eb:	ff 15 54 30 22 10    	call   DWORD PTR ds:0x10223054
101063f1:	8b 0d 88 31 22 10    	mov    ecx,DWORD PTR ds:0x10223188
101063f7:	83 c4 34             	add    esp,0x34
101063fa:	03 81 98 00 00 00    	add    eax,DWORD PTR [ecx+0x98]
10106400:	5f                   	pop    edi
10106401:	89 83 bc 03 00 00    	mov    DWORD PTR [ebx+0x3bc],eax
10106407:	5e                   	pop    esi
10106408:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
1010640b:	c7 83 70 03 00 00 64 	mov    DWORD PTR [ebx+0x370],0x64
10106412:	00 00 00 
10106415:	33 cd                	xor    ecx,ebp
10106417:	c7 83 d4 03 00 00 00 	mov    DWORD PTR [ebx+0x3d4],0x0
1010641e:	00 00 00 
10106421:	5b                   	pop    ebx
10106422:	e8 8c 77 03 00       	call   0x1013dbb3
10106427:	8b e5                	mov    esp,ebp
10106429:	5d                   	pop    ebp
1010642a:	c3                   	ret
